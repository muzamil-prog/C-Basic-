#include <iostream>
using namespace std;
void digit(int n){
    int firstDigit;
    int lastDigit;
    firstDigit%=10;
    if(n>=10){
        firstDigit/=10;
    }
    cout <<"the first digit is"<<firstDigit<<endl;
    cout <<"the last digit is "<<lastDigit<<endl;
}
int main(){
    int num;
    cout <<"enter the number"<<endl;
    cin >> num;
    digit(num);
    return 0;
}

