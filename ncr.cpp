#include <iostream>
using namespace std;
int factural(int n);
int ncr(int n, int r);
int main()
{
    int n=8;
    int r=2;
    cout <<ncr(n,r)<< endl;
    return 0;

}
int factural(int n){
    int fact=1;
    for(int i=1; i<=n; i++)
    fact*=i;


}
int ncr(int n , int r){
    int factn= factural(n);
    int factr= factural(r);
    int factnr= factural(n-r);
    factn/factr*factnr; 
}