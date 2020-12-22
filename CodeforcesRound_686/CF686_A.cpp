#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;
    cin >> N;
    vector<int> arr;
    for(int i = 1; i <= N; i++){
        arr.push_back(i + 1);
        if(i == N) arr[i - 1] = 1;
    }
    for(int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << endl;
}

int main(){

int T;

cin >> T;

while(T--){
    solve();
}
return 0;
}
