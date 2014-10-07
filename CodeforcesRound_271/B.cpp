#include<iostream>
#include<map>
#define LL long int
using namespace std;

int main(){

LL N, val, start, j;
map<LL, LL> m;
cin>>N;

start=1;

for(LL i=1; i<=N; i++){
        cin>>val;
        for(j=start;j<start+val;j++) m[j]=i;
        start=j;
}
LL Q, s;
cin>>Q;
for(LL q=1;q<=Q;q++)
{
    cin>>s;
    cout<<m[s]<<endl;
}


return 0;

}
