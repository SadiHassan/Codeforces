//NOT ACCEPTED
#include<iostream>
using namespace std;

int main(){

long long r, g, b;
long long ans=0;

cin>>r>>g>>b;

if(r<=g) ans = r;
else ans = g;

if(b<ans) ans = b;

r = r - ans;
g = g - ans;
b = b - ans;

long long sum=0;
long long x, y;

if(r==0){
        x = g; y = b;
}
else if(g==0){
        x = r; y = b;
}
else if(b==0){
        x = r; y = g;
}



long long temp;
if(x>=y){
    temp = x;
    x = y;
    y = temp;
}

if(y/x>=2) sum=x;
else{
    sum = y/2;
    //y = y - sum*2;
    if(y%2!=0&& ( x - sum >= 2 ) ) sum++;
}

cout<<ans+sum<<endl;
return 0;
}
