#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double f;
    while(cin>>f){
        double c;
        c=(f-32)*5/9;
        cout<<fixed<<setprecision(3)<<c<<endl;
    }



    return 0;
}
