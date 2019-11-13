#include <iostream>
#include <cstring>
using namespace std;

int main(void){
  char str[100];
  int counter = 0;
 /* while(cin >> str){
    cout << str << endl;
  }*/
  cin.getline(str, 100);
  char* ptr = strtok(str, " ");
  while(ptr != NULL){
    cout << ptr << endl;
    counter++;
    ptr = strtok(NULL, " ");
  }
  cout << counter << endl;
  return 0;
}
