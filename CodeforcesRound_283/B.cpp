#include<iostream>
#include<stdio.h>
using namespace std;

string ghurao(string str){
    //cout<<"before : "<<str<<endl;
    int len = str.size();
    string rep = "";
    rep += str[len-1];
    for(int i=0; i<=len-2; i++) rep+=str[i];
    //cout<<"after : "<<rep<<endl;
    return rep;
}

string perm(string str){

int len = str.size();
string ans = "", keep;
for(int i=1; i<=len; i++) ans+='9';

for(int i=1; i<=len; i++){

    if ( ans.compare(str) > 0 ) ans = str;

    str = ghurao(str);

}
    return ans;
}

int main(){

int N;
string str, ans;
string arr[15];

cin>>N;
cin>>arr[0];
//cout<<arr[0]<<endl;
for(int i=1; i<10; i++){

    for(int j=0; j<N; j++){
        if(arr[i-1][j]=='9') arr[i] += '0';
        else arr[i] += (arr[i-1][j]+1);
    }

}

ans="";
for(int i=1; i<=N; i++) ans+='9';
//cout<<ans<<endl;
//cout<<ans.compare(arr[0]);
string temp;

for(int i=0; i<10; i++){

    temp = perm(arr[i]);

    if ( ans.compare(temp) > 0 ) {
            ans=temp;
            //cout<<arr[0]<<endl;
            //cout<<ans<<endl;
    }// ans boro hoile
}

cout<<ans<<endl;

return 0;
}
