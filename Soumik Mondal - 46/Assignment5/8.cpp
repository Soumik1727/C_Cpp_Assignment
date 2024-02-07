#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Record {
    int id;
    string name;
    string address;
};

// Function prototypes
void addRecord(const Record& newRecord, const string& filename);
void viewAllRecords(const string& filename);
void deleteRecord(int recordId, const string& filename);
void searchRecord(int recordId, const string& filename);
void updateRecord(int recordId, const string& filename);

int main() {
    string filename = "records.txt";
    char choice;

    do {
        cout << "Menu:\n";
        cout << "a) Add new record\n";
        cout << "b) View all records\n";
        cout << "c) Delete particular record\n";
        cout << "d) Search record\n";
        cout << "e) Update record\n";
        cout << "f) Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a': {
                Record newRecord;
                cout << "Enter ID: ";
                cin >> newRecord.id;
                cin.ignore(); // Ignore the newline character left in the buffer
                cout << "Enter Name: ";
                getline(cin, newRecord.name);
                cout << "Enter Address: ";
                getline(cin, newRecord.address);

                addRecord(newRecord, filename);
                break;
            }
            case 'b':
                viewAllRecords(filename);
                break;
            case 'c': {
                int deleteId;
                cout << "Enter ID to delete: ";
                cin >> deleteId;

                deleteRecord(deleteId, filename);
                break;
            }
            case 'd': {
                int searchId;
                cout << "Enter ID to search: ";
                cin >> searchId;

                searchRecord(searchId, filename);
                break;
            }
            case 'e': {
                int updateId;
                cout << "Enter ID to update: ";
                cin >> updateId;

                updateRecord(updateId, filename);
                break;
            }
            case 'f':
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 'f');

    return 0;
}

void addRecord(const Record& newRecord, const string& filename) {
    ofstream outFile(filename, ios::app);
    if (!outFile) {
        cerr << "Error opening file for writing.\n";
        return;
    }

    outFile << newRecord.id << ',' << newRecord.name << ',' << newRecord.address << '\n';

    cout << "Record added successfully.\n";

    outFile.close();
}

void viewAllRecords(const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file for reading.\n";
        return;
    }

    cout << "ID\tName\tAddress\n";
    cout << "--------------------------------\n";

    Record record;
    while (inFile >> record.id) {
        inFile.ignore(); // Ignore the comma
        getline(inFile, record.name, ',');
        getline(inFile, record.address);

        cout << record.id << '\t' << record.name << '\t' << record.address << '\n';
    }

    inFile.close();
}

void deleteRecord(int recordId, const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file for reading.\n";
        return;
    }

    ofstream outFile("temp.txt");
    if (!outFile) {
        cerr << "Error opening temporary file for writing.\n";
        inFile.close();
        return;
    }

    Record record;
    bool found = false;
    while (inFile >> record.id) {
        inFile.ignore(); // Ignore the comma
        getline(inFile, record.name, ',');
        getline(inFile, record.address);

        if (record.id != recordId) {
            outFile << record.id << ',' << record.name << ',' << record.address << '\n';
        } else {
            found = true;
        }
    }

    inFile.close();
    outFile.close();

    if (found) {
        remove(filename.c_str());       // Delete the original file
        rename("temp.txt", filename.c_str());  // Rename the temporary file
        cout << "Record deleted successfully.\n";
    } else {
        remove("temp.txt"); // Delete the temporary file if no record is found
        cout << "Record not found.\n";
    }
}

void searchRecord(int recordId, const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file for reading.\n";
        return;
    }

    Record record;
    bool found = false;
    while (inFile >> record.id) {
        inFile.ignore(); // Ignore the comma
        getline(inFile, record.name, ',');
        getline(inFile, record.address);

        if (record.id == recordId) {
            found = true;
            cout << "Record found:\n";
            cout << "ID\tName\tAddress\n";
            cout << "--------------------------------\n";
            cout << record.id << '\t' << record.name << '\t' << record.address << '\n';
            break;
        }
    }

    inFile.close();

    if (!found) {
        cout << "Record not found.\n";
    }
}

void updateRecord(int recordId, const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file for reading.\n";
        return;
    }

    ofstream outFile("temp.txt");
    if (!outFile) {
        cerr << "Error opening temporary file for writing.\n";
        inFile.close();
        return;
    }

    Record record;
    bool found = false;
    while (inFile >> record.id) {
        inFile.ignore(); // Ignore the comma
        getline(inFile, record.name, ',');
        getline(inFile, record.address);

        if (record.id == recordId) {
            found = true;
            cout << "Enter new Name: ";
            getline(cin, record.name);
            cout << "Enter new Address: ";
            getline(cin, record.address);
        }

        outFile << record.id << ',' << record.name << ',' << record.address << '\n';
    }

    inFile.close();
    outFile.close();

    if (found) {
        remove(filename.c_str());       // Delete the original file
        rename("temp.txt", filename.c_str());  // Rename the temporary file
        cout << "Record updated successfully.\n";
    } else {
        remove("temp.txt"); // Delete the temporary file if no record is found
        cout << "Record not found.\n";
    }
}
