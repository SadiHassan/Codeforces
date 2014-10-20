#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int main(){

int a, b, c;
int ans=-1;
cin>>a>>b>>c;
if(a+b+c > ans ) ans = a+b+c;
if(a*b*c > ans ) ans = a*b*c;

if( a+ (b*c) > ans ) ans = a+ (b*c);
if( (a+b)*c > ans ) ans = (a+b)*c;
if( (a*b)+c > ans ) ans = (a*b)+c;
if( a*(b+c) > ans ) ans = a*(b+c) ;

cout<<ans<<endl;
return 0;
}
