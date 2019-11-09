//Количество цифр в n N
#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while(n != 0) {
        n /= 10;
        ++count;
    }
    return count;
}

int reverseDigits(int n) {
    int reverse = 0;
    while(n != 0){
        reverse *= 10;
        reverse += n%10;
        n /= 10;

    }
    return reverse;
}

void counts(int n){
    int digits[10] = {0};
    while(n != 0){
        ++digits[n%10];
        n /= 10;
    }
    for(int i = 0; i < 10; i++){
        cout << "Number of " << i << " = " << digits[i] << endl;
    }
}

int num_of_different_digit(int n){
    int digits[10] = {0};
    int num = 0;
    while(n != 0){
        ++digits[n%10];
        n /= 10;
    }
    for(int i = 0; i < 10; i++){
        if (digits[i] > 0) {
           num++;
        }
    }
    return num;
}

int max_digit(int n) {
    int max = 0;
    while(n != 0) {
        if(n%10 > max) {
            max = n%10;
        }
        n /= 10;
    }
    return max;
}

int main() {
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    cout << countDigits(n) << endl;
    cout << reverseDigits(n) << endl;
    counts(n);
    cout << "Number of each digit is " << num_of_different_digit(n) << endl;
    cout << "Max digit in this number is " << max_digit(n) << endl;
    return 0;
}