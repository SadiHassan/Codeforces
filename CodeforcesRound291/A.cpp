#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

string str;
int a, b;
cin>>str;

for(int i=0; i<str.size();i++){
    if(i==0){
        a = str[i] - 48;
        b = 9 - a;
        if(a==0) str[i] = b + 48;
        else if(b==0) str[i] = a + 48;
        else if(a<=b) str[i] = a + 48;
        else str[i] = b + 48;
    }
    else{
        a = str[i] - 48;
        b = 9 - a;
        //if(a==0) str[i] = b + 48;
        //else if(b==0) str[i] = a + 48;
        if(a<=b) str[i] = a + 48;
        else str[i] = b + 48;
    }
}

cout<<str<<endl;
return 0;

}
