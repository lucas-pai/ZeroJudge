#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    string cipherT;
    while(cin>>cipherT){
        char *decrypt;
        decrypt=new char[cipherT.length()];
        strcpy(decrypt,cipherT.c_str());
        for(int i=0;i<cipherT.length();i++)
            cout<<char(decrypt[i]-7);
        cout<<endl;
    }
    return 0;
}
