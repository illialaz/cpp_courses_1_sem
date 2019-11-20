#ifndef myLibary_h
#define myLibary_h
struct Spair{
    char word [20];
    int count;
    void print();
};
int findPosition (Spair* , int, char*);
void print(Spair* ws,int n);
int append(Spair *ws, int n,char *w);
#endif /* myLibary_h */
