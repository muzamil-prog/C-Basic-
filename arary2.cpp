#include <iostream>
using namespace std;
 int reversearary( int arr[] , int size){
    int start= 0;
    int end= size-1;
    while(start < end){
        swap(arr[start] , arr[end]);
        start ++;
        end --;
    }
 }
 int main(){
    int arr[]= { 1,2,3,4,8,9,7};
    int size=7 ;
    reversearary(arr , size);
    for(int i=0; i<size; i++ ){
        cout << arr[i];
    }
    cout <<endl;
    return 0;
 }