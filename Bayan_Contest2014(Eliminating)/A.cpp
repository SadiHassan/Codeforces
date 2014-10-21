#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){

int T, t, N;
string str;
int arr[55];
bool used[55];
//freopen("A.txt","r",stdin);
//freopen("out.txt","w",stdout);
cin>>T;
for(t=1; t<=T; t++){
    cin>>N;
    cin>>str;
    memset(arr,0,sizeof(arr));
    memset(used,false,sizeof(used));
    int m=-1;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i!=j){//&&!used[j]){
                if(str[i]=='R'&&str[j]=='S') arr[i]++;
                else if(str[i]=='P'&&str[j]=='R') arr[i]++;
                else if(str[i]=='S'&&str[j]=='P') arr[i]++;
                if( m < arr[i] ) m = arr[i];
                //used[j]=true;
            }
        }
    }
    int ans=0;
    for(int i=0; i<N; i++)
        if(arr[i]==m) ans++;
cout<<"Case #"<<t<<":"<<endl;
cout<<ans<<endl;

}

return 0;
}
