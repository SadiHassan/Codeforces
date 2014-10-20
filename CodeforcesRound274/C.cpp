#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#define ull int
using namespace std;

struct exam{
    ull frnt;
    ull prev;
};
bool compare(exam a, exam b){
    if(a.frnt == b.frnt) return a.prev<=b.prev;
    return a.frnt <= b.frnt;
}
exam arr[5005];

int main(){

int N;

cin>>N;

for(int i=1; i<=N; i++) { cin>>arr[i].frnt>>arr[i].prev; }

sort(arr+1,arr+N+1,compare);

ull ans=0;

for(int i=1; i<=N; i++){
        if(arr[i].prev>=ans) ans = arr[i].prev;
        else ans = arr[i].frnt;
}
cout<<ans<<endl;
return 0;
}
