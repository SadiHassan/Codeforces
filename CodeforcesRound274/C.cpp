#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#define ull unsigned long int
using namespace std;

struct exam{
    int frnt;
    int prev;
};
bool compare(exam a, exam b){
    if(a.frnt == b.frnt) return a.prev<=b.prev;
    return a.frnt <= b.frnt;
}
exam arr[10000];

int main(){

int N;

cin>>N;

for(int i=1; i<=N; i++) { cin>>arr[i].frnt>>arr[i].prev; }

sort(arr+1,arr+N+1,compare);

int ans=-1;

for(int i=1; i<=N; i++){
        if(arr[i].prev>=ans) ans = arr[i].prev;
        else ans = arr[i].frnt;
}
cout<<ans<<endl;
return 0;
}
