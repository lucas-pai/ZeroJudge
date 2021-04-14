#include <iostream>
#include <string>

using namespace std;

int main(){
    string num;
    while(cin>>num){
        int sum=0;
        for(int i=0;i<num.length();i++){
            if(num[i]=='-')
                continue;
            sum+=int(num[i]-'0');
        }
        if(sum%3==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
