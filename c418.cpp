#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int num;
    while(scanf("%d",&num)==1){
        for(int i=0;i<num;i++){
            for(int k=0;k<=i;k++){
                printf("*");

            }
            printf("\n");
        }
    }



    return 0;
}
