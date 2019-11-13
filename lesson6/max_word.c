#include <stdio.h>
#include <string.h>

int main(void){
  char str[100];
  char max_word[20] = "";
  gets(str);
  char* ptr = strtok(str, " ");
  while(ptr != NULL){
    if(strlen(ptr) > strlen(max_word)){
        strcpy(max_word, ptr);
    }
    ptr = strtok(NULL, " ");
  }
  printf("%s\n", max_word);
  return 0;
}