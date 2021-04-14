#include <iostream>

using namespace std;

int main(){
    long long l,d;
    while(cin>>l){
        if(l>0){
            d=2*l-1;
            cout<<d<<endl;
        }
        else{
            l=-l;
            d=l*2;
            cout<<d<<endl;
        }
    }

    return 0;
}
