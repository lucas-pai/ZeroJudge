#include <iostream>
#include <string>

using namespace std;
struct city{
    int value;
    char symbol;
};
int main(){
    int skip=0;
    string id;
    city county[26];
    for(int i=0;i<26;i++){
        county[i].symbol=char('A'+i);
        if(county[i].symbol=='I'){
            county[i].value=34;
            skip--;
        }
        else if(county[i].symbol=='O'){
            county[i].value=35;
            skip--;
        }
        else if(county[i].symbol=='W'){
            county[i].value=32;
            skip--;
        }
        else if(county[i].symbol=='Z')
            county[i].value=33;
        else
            county[i].value=10+i+skip;
    }
    while(cin>>id){
        int vertifi,sum=0;
        for(int k=0;k<8;k++)
            sum+=int(id[k]-'0')*(8-k);
        for(int l=0;l<26;l++){
            vertifi=(county[l].value/10)+(county[l].value%10)*9+sum+int(id[8]-'0');
            if(vertifi%10==0)
                cout<<county[l].symbol;
        }
        cout<<endl;
    }

    return 0;
}
