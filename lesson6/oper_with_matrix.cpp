#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  char** matrix;
  matrix = new char* [n];
  for(int i = 0; i < n; i++){
    matrix[i] = new char [n];
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      matrix[i][j] = '.';
    }
  }
  for(int j = 0; j < n; j++){
    matrix[n/2][j] = '*'; 
  }
  for(int i = 0; i < n; i++){
    matrix[i][n/2] = '*';
  }
  for(int i = 0; i < n; i++){
    matrix[i][i] = '*';
  }
  for(int i = 0; i < n; i++){
    matrix[i][n - i - 1] = '*';
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
