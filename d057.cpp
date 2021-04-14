#include <iostream>

using namespace std;

int main(){
    long long x1,x2,y1,y2;
    while(cin>>x1>>y1>>x2>>y2){
        if(x1!=0&&x2!=0&&y1!=0&&y2!=0){
            if(x2==x1||y2==y1){
                if(x2==x1&&y2==y1){
                    cout<<"0"<<endl;

                }
                else{
                    cout<<"1"<<endl;

                }
            }
            else if(((y2-y1)/(x2-x1)==1)||((y2-y1)/(x2-x1)==-1)){
                    if((y2-y1)%(x2-x1)==0)
                        cout<<"1"<<endl;
                    else
                        cout<<"2"<<endl;

            }
            else{
                cout<<"2"<<endl;
            }
        }

        else{
            break;
        }


    }

    return 0;
}
