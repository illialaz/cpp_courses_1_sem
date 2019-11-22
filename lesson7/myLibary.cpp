#include <iostream>
#include <cstring>
#include "myLibary.h"

void Spair::print(){
    std::cout<<word<<'\t'<<count<<'\n';
}

int findPosition(Spair*ws,int n, char* w){
    for (int i=0;i<n;++i){
        if (strcmp(ws[i].word,w)==0){
            return i;
        }
    }
return -1;

}
int append(Spair *ws, int n,char *w){
    int index=findPosition(ws,n,w);
    if(index>=0){
        ws[index].count++;
    }
    else{
        strcpy(ws[n].word,w);
        ws[n].count=1;
        ++n;
    }
    return n;
}
void print(Spair* ws,int n){
   for (int i=0;i<n;i++){
    ws[i].print();
  }
}
