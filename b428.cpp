#include <iostream>

using namespace std;

int main(){
    char clearT,cipherT;
    while(cin>>clearT){
        cin.ignore(1000,'\n');
        cin>>cipherT;
        cin.ignore(1000,'\n');
        if(cipherT-clearT<0)
            cout<<int(cipherT-clearT+26)<<endl;
        else
            cout<<int(cipherT-clearT)<<endl;
    }
    return 0;
}
