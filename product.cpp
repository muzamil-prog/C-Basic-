#include <iostream>
using namespace std;
int product(int a , int b){
    return a*b;
}


int main(){
int a, b;
cout <<"enter the value of a and b"<<endl;
cin >> a, b;
cout << product(a,b);
return 0;
}