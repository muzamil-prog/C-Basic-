#include <iostream>
using namespace std;
 int getMaxRowSum(int matrix[][3] , int row, int column){
    int maxRowSum = __INT_MAX__;
    int rowSumi=0;
    for(int i=0; i <row; i++){

        for(int j=0; j<column; j++){
            maxRowSum+=matrix[i][j];
        }
        maxRowSum= max(maxRowSum, rowSumi);
    }
    return maxRowSum;

}
int main(){
    int matrix[3][3]={{1,2,3,},{4,5,6},{7,8,9}};
    int row=3;
    int column=3;
    cout << getMaxRowSum(matrix,row,column);
    return 0;
