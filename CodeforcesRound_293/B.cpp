#include<iostream>

using namespace std;

int main(){

/*
cout<<'a'<<(int)'a'<<endl;
cout<<'z'<<(int)'z'<<endl;
cout<<'A'<<(int)'A'<<endl;
cout<<'Z'<<(int)'Z'<<endl;
*/

int arr1[60], arr2[60];
string s, t;

cin>>s>>t;

for(int i=0; i<54; i++) {
    arr1[i] = 0;
    arr2[i] = 0;
}

for(int i=0; i<s.size();i++){
    if(s[i]>='A'&&s[i]<='Z') arr1[s[i]-65] = arr1[s[i]-65] + 1;
    else arr1[s[i]-97+26] = arr1[s[i]-97+26] + 1;
}

for(int i=0; i<t.size();i++){
    if(t[i]>='A'&&t[i]<='Z') arr2[t[i]-65] = arr2[t[i]-65] + 1;
    else arr2[t[i]-97+26] = arr2[t[i]-97+26] + 1;
}

int x = 0, y = 0, tt=0;



for(int i=0; i<52; i++){
    tt = 0;
    if(arr1[i]!=0){
        if(arr2[i]!=0){

                tt = min(arr1[i],arr2[i]);
                x += tt;
                arr1[i] -= tt;
                arr2[i] -= tt;
        }
    }
}

for(int i=0;i<26;i++){
    tt = 0;
    if(arr1[i]!=0&&arr2[i+26]!=0){
        tt = min(arr1[i],arr2[i+26]);
        y += tt;
        arr1[i] -= tt;
        arr2[i+26] -= tt;
    }
}

for(int i=26;i<52;i++){
    tt = 0;
    if(arr1[i]!=0&&arr2[i-26]!=0){
        tt = min(arr1[i],arr2[i-26]);
        y += tt;
        arr1[i] -= tt;
        arr2[i-26] -= tt;
    }
}

cout<<x<<" "<<y<<endl;
return 0;
}
