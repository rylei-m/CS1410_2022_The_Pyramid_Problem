#include <iostream>
using namespace std;

int main(){
    int line, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int a = 1, b = 0; a <= rows; ++a, b = 0){
        for(line = 1; line <= rows-a; ++line){
            cout <<"  ";
        }

        while(b != 2*a-1){
            cout << "X ";
            ++b;
        }
        cout << endl;
    }    
    return 0;
}