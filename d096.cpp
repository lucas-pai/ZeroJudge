#include <iostream>

using namespace std;

int main(){
   long long n;
   while(cin>>n){
        n=3*(n+1)*(n+1)/2-9;
        cout<<n<<endl;
   }
    return 0;
}
