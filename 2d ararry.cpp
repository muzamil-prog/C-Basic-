 #include <iostream>
using namespace std;
int main(){
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int row=4;
    int column=4;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout << matrix[i][j];
        }
        cout <<endl;
    }
    return 0;
}
