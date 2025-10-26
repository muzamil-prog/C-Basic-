#include <iostream>
using namespace std;
int digitSum(int n){
  int sumDigit=0;
  while(n>0){
   int lastDigit=lastDigit%10;
   n/=10;
   sumDigit+=lastDigit;

  }

}
int main(){
  cout <<"sum digit is"<<digitSum(3659)<<endl;
  return 0;
}
