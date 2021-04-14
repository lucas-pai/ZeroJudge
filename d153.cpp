#include <iostream>

using namespace std;

int main(){
    int set_data,num_data,data,*tdata;
    cin>>set_data;
    for(int i=0;i<set_data;i++){
        cin>>num_data;
        tdata=new int[num_data];
        for(int j=0;j<num_data;j++){
            cin>>data;
            tdata[j]=data;
        }
        int temp;
        for(int m=0;m<num_data;m++){
            for(int n=m;n<num_data-1;n++){
                if(tdata[n]>tdata[n+1]){
                        temp=tdata[n];
                        tdata[n]=tdata[n+1];
                        tdata[n+1]=temp;
                }
            }
        }
        cout<<tdata[(num_data-1)/2]<<endl;
    }
    return 0;
}
