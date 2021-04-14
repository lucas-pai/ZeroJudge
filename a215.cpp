#include <iostream>

using namespace std;

int main(){
    int num,range;
    while(cin>>num>>range){
        int times=1,sum=num;
        for(num++;sum<=range;num++){
            sum+=num;
            times++;
        }
            cout<<times<<endl;

    }

    return 0;
}
