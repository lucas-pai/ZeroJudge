#include <iostream>

using namespace std;

int main(){
    int t;
    while(cin>>t){
        for(int i=0;i<t;i++){
            int a,b,area;
            cin>>a>>b;
                if((a-2)%3==0&&(b-2)%3==0){
                    area=(a-2)/3*(b-2)/3;
                    cout<<area<<endl;
                }
                else if((a-2)%3!=0&&(b-2)%3==0){
                    area=((a-2)/3+1)*(b-2)/3;
                    cout<<area<<endl;
                }
                else if((a-2)%3==0&&(b-2)%3!=0){
                    area=(a-2)/3*((b-2)/3+1);
                    cout<<area<<endl;
                }
                else{
                    area=((a-2)/3+1)*((b-2)/3+1);
                    cout<<area<<endl;
                }

        }
    }

    return 0;
}
