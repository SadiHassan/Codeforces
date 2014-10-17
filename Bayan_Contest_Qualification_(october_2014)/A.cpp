#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

int T;
string str;
freopen("85.in","r",stdin);
freopen("outA.txt","w",stdout);
cin>>T;

for(int t=1; t<=T; t++){
    cin>>str;
    for(int i=str.size()-1; i>=0; i--) cout<<str[i];
    cout<<endl;
}

return 0;

}
