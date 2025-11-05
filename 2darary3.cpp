 #include <iostream>
using namespace std;
bool leanearSearch(int matrix[][3], int row, int column, int keys){
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(matrix[i][j]== keys){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int column=3;
    int keys=9;
    cout << leanearSearch(matrix, row, column, keys);
    return 0;
}