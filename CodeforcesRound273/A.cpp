#include<iostream>
using namespace std;

int main(){

int x;
int sum=0;

for(int i=1;i<=5; i++){
    cin>>x;
    sum += x;
}
int avg = sum/5;

if(avg*5==sum && avg!=0) cout<<avg<<endl;
else cout<<"-1"<<endl;


return 0;
}
