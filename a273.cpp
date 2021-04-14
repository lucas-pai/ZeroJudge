#include <iostream>

using namespace std;

int main(){
    long long a,k;
    while(cin>>a>>k){
        if(k!=0){
            if(a%k==0){
                cout<<"Ok!"<<endl;
            }
            else{
                cout<<"Impossib1e!"<<endl;
            }
        }
        else if(a==0&&k==0){
            cout<<"Ok!"<<endl;

        }
        else{
            cout<<"Impossib1e!"<<endl;
        }

    }

    return 0;
}
