#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int num;
    while(scanf("%d",&num)==1){
        for(int i=0;i<num;i++){
            for(int k=0;k<num-i-1;k++){
                printf("_");

            }
            for(int l=0;l<=i;l++){
                printf("*");

            }
            printf("\n");
        }
    }

    return 0;
}
