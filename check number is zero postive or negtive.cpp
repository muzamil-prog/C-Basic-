#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"enter your first number"<<endl;
    cin >> n;
    if(n==0){
        cout <<"you enter the zero number"<<endl;
    }else if(n>=1){
        cout <<"you enter the positive number"<<endl;

    }else{
        cout <<"you enter the negtive number"<<endl;
    }
    return 0;
}