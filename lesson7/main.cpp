#include <iostream>
#include <fstream>

#include "myLibary.h"


int main(int argc, const char * argv[]) {
    Spair pair;
    strcpy(pair.word,"Hello");
    pair. count=1;
    std::cout<<pair.word<<" "<<pair.count<<std::endl;
    Spair words[100];
    char word[20];
    int size=0;
     while (std::cin>>word){
        size=append(words, size, word);
    }
    print (words,size);
    system("pause");
    return 0;
}
