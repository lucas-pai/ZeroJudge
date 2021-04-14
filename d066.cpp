#include <iostream>

using namespace std;

int main(){
    int h,m;
    while(cin>>h>>m){
        if(h*60+m>=450&&h*60+m<1020){
            cout<<"At School"<<endl;
        }
        else{
            cout<<"Off School"<<endl;
        }
    }

    return 0;
}
