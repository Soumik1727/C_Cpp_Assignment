/*
        . Print the pattern using class and objects
***********
 *********
  *******
   *****
    ***
     *
*/

#include<iostream>
                        // OK
using namespace std;

int main(){
    cout << "Enter the number of rows: ";
    int rows;
    cin >> rows;

    for( int i=0; i<rows; i++){
        for(int j=0; j<i; j++){
            cout << "  ";
        }
        for( int col=0; col < 2*rows - 2*i - 1 ; col++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}