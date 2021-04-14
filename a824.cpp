#include <iostream>

using namespace std;

int main(){
    int pw1,pw2,pw3;
    while(cin>>pw1>>pw2>>pw3){
        int sum=0;
        for(int i=1;i<=pw3;i++){
            if(i%pw1==0||i%pw2==0)
                sum+=i;
        }

        sum%=26;
        char password='A'+sum-1;
        cout<<password<<endl;

    }
    return 0;
}
