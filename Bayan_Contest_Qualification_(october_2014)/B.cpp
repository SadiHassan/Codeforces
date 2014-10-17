#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

int T;
string str;
freopen("12.in","r",stdin);
freopen("out.txt","w",stdout);
cin>>T;

for(int t=1; t<=T; t++){
    cin>>str;
    int tot=0;

    for(int i=str.size()-1; i>=0; i--)
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') tot++;

    if(tot%2) cout<<"PESAR"<<endl;
    else cout<<"DOKHTAR"<<endl;

}

return 0;

}
