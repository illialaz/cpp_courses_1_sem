#include <iostream>
#include <string>
#include <fstream>
#include <map>
using namespace std;

int main(void){
  ifstream fin("input.dock");
  string str;
  map <string, int> words;
  /*while(fin>>str){
    (words[str])++;
  }*/

  char line[200];
  char* word;
  char seps[] = ", .\t\n!";
  while(fin.getline(line, 200)){
    word = strtok(line, seps);
    while(word != NULL){
      (words[word])++;
      word = strtok(NULL, seps);
    }
  }

  //for(auto elem:words)    or    for(pair<string, int> elem:words){
  //cout << elem.first << "  " << elem.second << endl;
  //}
  
  for(map <string, int> :: iterator iter = words.begin(); iter != words.end(); iter++){
    cout << iter -> first << "  " << iter -> second << endl; // or 
    //cout << (*iter).first << "  " << (*iter).second << endl;
  }
  return 0;
}