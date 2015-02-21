#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){

double slope[1010], x0, y0, x[1010], y[1010], eps = 0.00001;
int N;

cin>>N>>x0>>y0;

for(int i=0; i<N; i++) cin>>x[i]>>y[i];

for(int i=0; i<N; i++)
{
    if((x[i] - x0)== 0)
        slope[i] = 10009;
    else slope[i] = (y[i] - y0)/(x[i] - x0) ;
}

sort(slope,slope+N);
int now = -10001, tot=0;
//for(int i=0; i<N; i++) cout<<slope[i]<<" ";
//cout<<endl;
for(int i=0; i<N; i++)
    {
        if(i==0){
            //now = slope[i];
            tot++;
        }
        else if(slope[i]!=slope[i-1]){
            //now = slope[i];
            tot++;
        }
    }

cout<<tot<<endl;

return 0;
}
