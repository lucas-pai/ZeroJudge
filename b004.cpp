#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double a,b;
    const double pi=2*acos(0);
    while(cin>>a>>b){
        double sum;
        sum=sqrt((b/2)*(b/2)-(a/2)*(a/2))*(b/2)*pi;
        cout<<fixed<<setprecision(3)<<sum<<endl;

    }

    return 0;
}
