#include<iostream>
using namespace std;

int main(){

int arr[110], N, diff, ans, mx;

cin>>N;

for(int i=1; i<=N; i++) cin>>arr[i];

ans = 100000;

for(int i=2; i<=N-1; i++){

    mx = -1;

    for(int j=2; j<=N; j++){

        if(j==i) continue;

        if(j-1==i) diff = arr[j] - arr[j-2];
        else diff = arr[j] - arr[j-1];

        mx = max(mx,diff);

    }
    if(mx!=-1)
    ans = min(ans,mx);
}

cout<<ans<<endl;
return 0;
}
