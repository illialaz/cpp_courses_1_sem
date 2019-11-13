#include <iostream>
using namespace std;

int main(void){
  int n;
  cin >> n;
  int** matrix;
  matrix = new int* [n];
  for(int i = 0; i < n; i++){
    matrix[i] = new int [n];
  }
  for(int j = 0; j < n; j++){
      int value = 0; 
      for(int i = j; i < n; i++){
        matrix[i][j] = (value++);
      }
      value = 1;
      for(int i = j - 1; i >= 0; i--){
        matrix[i][j] = (value++);
      }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  for(int i = 0; i < n; i++){
    delete[] matrix[i];
  }
  delete[] matrix;
}