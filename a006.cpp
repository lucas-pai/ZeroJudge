#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b,c;
    while(cin>>a>>b>>c){
        int x;
            if(((b*b)-(4*a*c))==0){
                x=(-b)/(2*a);
                cout<<"Two same roots x="<<x<<endl;
            }
            else if(((b*b)-(4*a*c))<0){
                cout<<"No real root"<<endl;
            }
            else{
                double k;
                k=((b*b)-(4*a*c));
                int x1;
                int x2;
                x1=((-b)+sqrt(k))/2*a;
                x2=((-b)-sqrt(k))/2*a;
                cout<<"Two different roots x1="<<x1<<" , x2="<<x2<<endl;
            }
    }
    return 0;
}
