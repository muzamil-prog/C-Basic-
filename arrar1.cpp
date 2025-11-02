#include <iostream>
using namespace std;
int main(){
  int largest = __INT16_MAX__ ;
  int arr[6]={34, 9, 0,6,7,8,};
  for(int i=0; i<6; i++){
       if(arr[i]< largest){
     largest = arr[i];
    }
//    alternate

//     largest= min(arr[i], largest);

  }
 cout << largest;
 return 0;}
 
// } how get size of array
//  cout << sizeof(num);
