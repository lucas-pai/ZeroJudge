#include <iostream>

using namespace std;

int main(){
    long long co,ch,ca,i;
    while(cin>>co>>ch>>ca){
        long long k=0;
        for(i=0;i*10<=co&&i*2<=ca;i++){

            k+=1;

        }
        cout<<co<<" 個餅乾，"<<ch+k-1<<" 盒巧克力，"<<ca<<" 個蛋糕。"<<endl;
    }

    return 0;
}
