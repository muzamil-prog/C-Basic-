#include <iostream>
#include <cctype>
#include <string>
using namespace std;
bool isValidPassword(string password){
    if(password.length() <8){
        cout <<"password must be 8 character"<<endl;
        return false;
    }
    bool hasUper= false, hasLower= false, hasDigit= false, hasSpecial= false;
    for(char ch : password){
        if (isupper(ch))
        hasUper = true;
        else if(islower(ch))
        hasLower =true;
        else if(isdigit(ch))
        hasDigit =true;
        else if(ispunct(ch))
        hasSpecial =true;
    }
    if(!hasUper)
    cout <<"password must be at least one one uper case letter"<<endl;
    if(!hasLower)
    cout <<"passsowrd ne must at least one lower case letter"<<endl;
    if(!hasDigit)
    cout<<"password must have one digit nbr"<<endl;
    if(!hasSpecial)
    cout <<"password must be at least one spcial letter"<<endl;
    return hasUper && hasLower && hasDigit && hasSpecial;
}
int main(){
    string password;
    cout <<"creat your password";
    cin >> password;
    if(isValidPassword(password)){
        cout <<"you creat a strong password successfuly"<<endl;

    }else{
        cout <<"please try again";
    }
    return 0;
}
