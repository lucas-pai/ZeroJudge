#include <iostream>

using namespace std;

int main(){
    long long a,b,c;
    while(cin>>a>>b>>c){
        if(a>b&&a>c){
            cout<<a<<endl;
        }
        else if(b>a&&b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }

    return 0;
}
