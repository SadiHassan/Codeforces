#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int arr[105];
int n, k;

int max_now(){
    int max_val=-1;
    int max_ind=-1;

    for(int i=1; i<=n; i++)
        if(arr[i]>max_val){
            max_val = arr[i];
            max_ind = i;
        }
    return max_ind;
}

int min_now(){
    int min_val=10005;
    int min_ind=-1;

    for(int i=1; i<=n; i++)
        if(arr[i]<min_val){
            min_val = arr[i];
            min_ind = i;
        }
    return min_ind;

}

int main(){

cin>>n>>k;
for(int i=1; i<=n; i++) cin>>arr[i];

int ops=0;
int max_ind, min_ind;
int cur, ans=10005;
int steps[1001][2];
int ind=0;

max_ind = max_now();
min_ind = min_now();
cur = arr[max_ind]-arr[min_ind];

if(cur==0||cur==1){
        cout<<cur<<" "<<ops<<endl;
}
else{
        ops=1;

        while(ops<=k){

            max_ind = max_now();
            min_ind = min_now();

            cur = arr[max_ind]-arr[min_ind];
            if(cur ==1) { ans = cur; break;}
            if(cur ==0) { ans = cur; break;}
            if(cur < 0) break;

            arr[max_ind]--;
            arr[min_ind]++;
            //cur-=2;
            //if(ans>cur){
            //    ans = cur;
                steps[ind][0] = max_ind;
                steps[ind][1] = min_ind;
                ind++;
            //}
        ops++;
    }
cout<<arr[max_now()]-arr[min_now()]<<" "<<ops-1<<endl;
for(int i=0; i<ind; i++)
    cout<<steps[i][0]<<" "<<steps[i][1]<<endl;

}
return 0;
}
