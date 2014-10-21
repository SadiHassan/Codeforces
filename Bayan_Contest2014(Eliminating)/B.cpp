#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){

unsigned long int T, W, R, M, S;
//freopen("B.txt","r",stdin);
//freopen("out.txt","w",stdout);
cin>>T;
for(int t=1; t<=T; t++){
    cin>>W>>R>>M>>S; // TEMP   HEART  MOVEMENT  STILL
    cout<<"Case #"<<t<<":"<<endl;

    if(M>=10) cout<<"NOTHING"<<endl;
    else if( W<35 || R<40) cout<<"EMERGENCY"<<endl;
    else if( M<10 && R>60) cout<<"NIGHTMARE"<<endl;
    else if( ( (double)S )/( (double)3600 ) > 8.0 ) cout<<"WAKE-UP"<<endl;
    else cout<<"NOTHING"<<endl;

}

return 0;
}
