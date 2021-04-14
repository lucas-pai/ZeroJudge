#include <iostream>

using namespace std;

int main(){
    int n,*brick,hight,ave_hight,mov,flag=1;
    while(cin>>n){
        if(n==0)
            break;
        else{
            int sum_br=0,sum_mov=0;
            brick=new int[n];
            for(int i=0;i<n;i++){
                cin>>hight;
                brick[i]=hight;
                sum_br+=hight;
            }
            ave_hight=sum_br/n;
            for(int j=0;j<n;j++){
                if(brick[j]/ave_hight>=1)
                    mov=brick[j]-ave_hight;
                else
                    mov=0;
                sum_mov+=mov;
            }
        cout<<"Set #"<<flag<<"\nThe minimum number of moves is "<<sum_mov<<"."<<endl;
        delete [] brick;
        flag++;
        }


    }

    return 0;
}
