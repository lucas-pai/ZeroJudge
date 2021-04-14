#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int *food;
    int n,fs,m;
    while(true){
        scanf("%d",&n);
        food=new int[n];
        scanf("%d",&m);
        for(int i=0;i<n;i++){
            scanf("%d",&fs);
            food[i]=fs;

        }
        for(int k=0;k<m;k++){
            int l,r;
            scanf("%d%d",&l,&r);
            int sum=0;
            for(l=l-1;l<=r-1;l++){
                sum+=food[l];

            }
            printf("%d\n",sum);

        }

        delete [] food;

    }
    return 0;
}
