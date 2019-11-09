#include <iostream>
using namespace std;

int main(){
    /*for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 5; j++){
            cout << j << '*' << i << '=' << j*i << '\t';
        }
        cout << endl;
    }
    cout << endl << endl << endl;
    for(int i = 1; i <= 10; i++){
        for(int j = 6; j <= 10; j++){
            cout << j << '*' << i << '=' << j*i << '\t';
        }
        cout << endl;
    }
    cout << endl << endl << endl;*/
    for(int i = 1; i <= 16; i++){
        for(int j = 1; j <= 8; j++){
           // cout << j << '*' << i << '=' << j*i << '\t';
            printf("%X * %X = %2X\t",j, i, j*i);
        }
        cout << endl;
    }
    cout << endl << endl << endl;
    for(int i = 1; i <= 16; i++){
        for(int j = 9; j <= 16; j++){
            //cout << j << '*' << i << '=' << j*i << '\t';
            printf("%X * %X = %2X\t",j, i, j*i);
        }
        cout << endl;
    }
}
