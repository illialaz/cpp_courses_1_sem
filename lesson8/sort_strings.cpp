#include <iostream>
#include <cstring>
using namespace std;

void print(char** words, int n){
  for(int i = 0; i < n; i++){
    cout << words[i] << endl;
  }
}

int main(void){
  char** words;
  int n;
  cin >> n;
  words = new char*[n];
  char buff[100];//max length of the word
  for(int i = 0; i < n; i++){
    cin >> buff;
    words[i] = new char[strlen(buff) + 1];
    strcpy(words[i], buff);
  }
  cout << "\n============\n";
  print(words, n);
  for(int j = 0; j < n - 1; j++){
    for(int i = 0; i < n - j - 1; i++){
      //if((strcmp(words[i], words[i + 1])) > 0) in alphabet order
      //if((strcmp(words[i], words[i + 1])) > 0) in reverse alphabet order
      //if(strlen(words[i]) > strlen(words[i + 1])) by length
      if(((strlen(words[i]) == strlen(words[i + 1])) 
          && (strcmp(words[i], words[i + 1]) > 0))
          || (strlen(words[i]) > strlen(words[i + 1])))

      {
        swap(words[i], words[i + 1]);
      }
    }
  }
  cout << "\n============\n\n";
  print(words, n);
  return 0;
}
