#include <iostream>

using namespace std;

int power(int base,int index){
    if(index==1)
        return base;
    return base*power(base,index-1);
}
int digits(int num,int tool,int len){
    if(num/tool==0)
        return len;
    digits(num,tool*10,len+1);
}
int main(){
    int numstart,numend,digit,*digitnum;
    while(cin>>numstart>>numend){
        bool exist=false;
        for(numstart;numstart<=numend;numstart++){
            int sum=0,divi=1;
            digit=digits(numstart,1,0);
            digitnum=new int[digit];
            for(int i=0;i<digit;i++){
                digitnum[i]=(numstart/divi)%10;
                divi*=10;
                sum+=power(digitnum[i],digit);
            }
            if(numstart==sum){
                cout<<numstart<<" ";
                exist=true;
            }

            delete [] digitnum;

        }
        if(exist==false)
            cout<<"none"<<endl;
        else
            cout<<endl;

    }
    return 0;
}
