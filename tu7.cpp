#include <iostream>
using namespace std;
int checkPrimeNo(int n){
    bool isprme= true;
    if(n <=1){
        isprme=false;
    }else{
        for(int i=2; i<= n-i; i++){
            if(n%i==0){
                isprme= false;
                break;
            }
        }
    }
    if(isprme){
        cout <<"is prime no";
}else{
        cout <<"is not prime no";
    }
    return isprme;

} 
int main(){
    int num;
    cout <<" enter the number";
    cin>> num;
    checkPrimeNo(num);
    return 0;

    
}