#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int num;
    while(scanf("%d",&num)==1){
        int sum=0;
        for(int i=0;i<num;i++){
            if(num%(i+1)==0)
                sum+=i+1;

        }
        sum-=num;
        if(sum<num)
            printf("����\n");

        else if(sum>num)
            printf("�ռ�\n");

        else
            printf("������\n");

    }
    return 0;
}
