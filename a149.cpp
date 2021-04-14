#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int num;
    char data[12]={'\0'};
    while(cin>>num){
        for(int k=0;k<num;k++){
            int sum=1;
            cin>>data;
            for(int i=11;i>=0;i--){
                if(data[i]=='\0')
                    continue;
                sum*=atoi(data+i);
                *(data+i)='\0';
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
