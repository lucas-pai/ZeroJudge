#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int num;
    while(scanf("%d",&num)==1){
        for(int i=0;i<num;i++){
            int up,low,sum,same;
            scanf("%d%d",&low,&up);
            if(up<low){
                int temp;
                temp=low;
                low=up;
                up=low;
            }
            same=up*up-low*low;
            if(up%2==1&&low%2==1){
                sum=(same+2*(up+low))/4;
            }
            else if(up%2==1&&low%2==0){
                sum=(same+(2*up)+1)/4;
            }
            else if(up%2==0&&low%2==1){
                sum=(same+(2*low)-1)/4;
            }
            else{
                sum=same/4;
            }
            printf("Case %d: %d\n",i+1,sum);


        }
    }

    return 0;
}
