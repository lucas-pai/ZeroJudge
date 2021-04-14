#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int num;
    while(scanf("%d",&num)==1){
        int a,f;
        scanf("%d%d",&a,&f);
        for(int i=0;i<f;i++){
            for(int k=1;k<=a;k++){
                for(int l=1;l<=k;l++){
                        printf("%d",l);

                }
                printf("\n");
            }
            for(int m=a-1;m==1;m--){
                for(int n=m;n==0;n--){
                    printf("%d",n);
                }
            }
        }
    }

    return 0;
}
