#include <iostream>
using namespace std;
int fun(int x);
int main(){
    int x=5;
    fun(x);
    cout << "xx="<<x<< endl;
    return 0;
}
int fun(int x){
    x=2*x;
    cout << "x="<<x<< endl;
}