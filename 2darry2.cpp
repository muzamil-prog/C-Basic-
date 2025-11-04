#include <iostream>
using namespace std;
int main(){
    int matrix[4][4];
    int row=4;
    int column=4;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin >> matrix[i][j];
        }
        cout <<endl;
    }
     for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout << matrix[i][j];
        }
        cout <<endl;
    }
    return 0;
}
