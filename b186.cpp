#include <iostream>

using namespace std;

int main(){
    long long co,ch,ca,i;
    while(cin>>co>>ch>>ca){
        long long k=0;
        for(i=0;i*10<=co&&i*2<=ca;i++){

            k+=1;

        }
        cout<<co<<" �ӻ氮�A"<<ch+k-1<<" �����J�O�A"<<ca<<" �ӳJ�|�C"<<endl;
    }

    return 0;
}
