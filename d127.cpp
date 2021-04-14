#include <iostream>

using namespace std;

int main(){
    long long l,area;
    while(cin>>l){
        if(l%4==0){
            area=l/4*l/4;
            cout<<area<<endl;
        }
        else{
            area=(l/4+1)*(l/4);
            cout<<area<<endl;
        }
    }

    return 0;
}
