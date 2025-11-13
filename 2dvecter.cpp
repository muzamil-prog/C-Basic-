#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<vector<int> > mat={{1,2,3},{4,5,6}};
int row=3;
int column=3;
for(int i=0; i<row; i++){
    for(int j=0; j<column; j++){
        cout << mat[i][j];
        
    }
    cout << endl;
}
return 0;
}