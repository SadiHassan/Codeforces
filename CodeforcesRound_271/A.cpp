#include<iostream>
using namespace std;

int main(){

string str1="qwertyuiop";
string str2="asdfghjkl;";
string str3="zxcvbnm,./";

int s=0;
char ch;
string inp;

cin>>ch;
cin>>inp;
if(ch=='R') s=-1;
else s=1;

for(int i=0; i<inp.size();i++) {

    bool found=false;

    for(int j=0; j<str1.size();j++){
        if(str1[j]==inp[i]){
            found=true;
            cout<<str1[j+s];
        }
    }
    if(found) continue;

    for(int j=0; j<str2.size();j++){
        if(str2[j]==inp[i]){
            found=true;
            cout<<str2[j+s];
        }
    }
    if(found) continue;

    for(int j=0; j<str3.size();j++){
        if(str3[j]==inp[i]){
            found=true;
            cout<<str3[j+s];
        }
    }
    if(found) continue;

}

cout<<endl;
return 0;
}
