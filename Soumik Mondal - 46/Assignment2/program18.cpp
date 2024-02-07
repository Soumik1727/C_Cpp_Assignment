                    // UPPERCASE   && LOWERCASE
#include<iostream>
#include<string.h>
using namespace std;
int index = 0;                                  // OK

void upperCase(char ch[100]){
    int index  = 0;

    while(ch[index] != '\0'){
        if(ch[index] >= 'a' && ch[index] <= 'z'){
            ch[index] = ch[index] - 'a' + 'A';
        }
        else{
            ch[index] = ch[index] - 'A' +'a';
        }
        index++;
    }
    cout << ch << endl;
}

int main(){
    cout << "Enter a string: ";
    char ch[100];
    cin.getline(ch,100);
    cout << "Original String: " << ch <<endl;

    upperCase(ch);

    return 0;
}