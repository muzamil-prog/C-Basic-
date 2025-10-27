#include <iostream>
using namespace std;
 int facutreal(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
 }int main(){
    int n;
    cout <<"enter the nbr"<<endl;
    cin>> n;
    cout<< "factural is"<< facutreal(n);
    return 0;
 }