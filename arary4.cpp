
#include <iostream>
using namespace std;
void changearary(int arr[] , int size){
    cout <<"in function";
    for(int i=0; i< size; i++){
        arr[i]=2*arr[i];
    }
}
int main(){
    int arr[3]={1,3,4};
  
    changearary(arr, 3);
      cout << "in main";
    for (int i=0; i<3;  i++){
        cout << arr[i];
    }
    cout << endl;
    return 0;
}