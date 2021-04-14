#include <iostream>

using namespace std;

int main(){
    int number,temp,data,*datalist;
    while(cin>>number){
        datalist=new int[number];
        for(int i=0;i<number;i++){
            cin>>data;
            datalist[i]=data;
        }
        for(int l=number-2;l>0;l--)
            for(int k=0;k<=l;k++){
                if(datalist[k]>datalist[k+1]){
                    temp=datalist[k+1];
                    datalist[k+1]=datalist[k];
                    datalist[k]=temp;
                }
        }
        for(int m=0;m<number;m++)
            cout<<datalist[m]<<" ";
        cout<<endl;
    }
    return 0;
}
