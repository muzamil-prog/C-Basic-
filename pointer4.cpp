#include <iostream>
//return by reference
using namespace std;
int & swap(int &a , int &b){
  int temp= a;
   a=b;
  b= temp;
  return a;
}
int main(){
  int a =9 ;
  int  b = 8;
  cout <<"a="<<a<<"b="<<b;
  swap(a, b)=761;
  cout <<"a="<<a<<"b="<<b;
return 0;}
