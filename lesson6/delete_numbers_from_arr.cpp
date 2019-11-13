#include <iostream>
using namespace std;

int main(){
  char str[100];
  cin.getline(str, 100);
  int len = strlen(str);
  int iWrite = 0;
  for(int iRead = 0; iRead < len; ++iRead){
    if((str[iRead] < '0') || (str[iRead] > '9')){
      str[iWrite++] = str[iRead];
    }
  }
  str[iWrite] = '\0';
  cout << str << endl;
}
