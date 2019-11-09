#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "n = " << endl;
    cin >> n;
    int i = 0;
    int mask = 0x80000000;
    for(; !(n&mask); n <<= 1, i++) {
        ;
    }
    for(; i<32; n <<= 1, i++){
        cout << ((n&mask)?'1':'0');
    }
   /* for(int i = 32; i >0; i--) {
        cout << ((n&mask)?'1':'0');
        n <<= 1;
    }*/
    cout << endl;
    return 0;
}

