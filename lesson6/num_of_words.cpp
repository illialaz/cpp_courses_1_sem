#include <iostream>
#include <fstream>
using namespace std;

int main(void){
  char words[100][20];
  int counts[100] = {0,};
  char word[20];
  int i, nWords = 0;
  ifstream fin("input.txt");
  if(!fin){
    cout << "Open File Error\n";
    return 0;
  }
  while(fin>>word){
    for(i = 0; i < nWords; i++){
      if(strcmp(words[i], word) == 0){
        break;
      }
    }
    if(i < nWords){
     ++(counts[i]);
    }
    else{
      strcpy(words[nWords], word);
      counts[nWords] = 1;
       ++nWords;
    }
    
  }
  for(i = 0; i < nWords; i++){
      cout << words[i] << " - " << counts[i] << endl;
    }
  return 0;
}