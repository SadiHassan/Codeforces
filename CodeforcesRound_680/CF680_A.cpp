#include <bits/stdc++.h>
using namespace std;

/*
1 (4) 4
2 (8) 4 6
3 (12) 4 6 10
4 (16) 4 6 10 14
5 (20) 4 6 10 14 15
6 (24) 4 6 10 14 15 22
7 (28) 4 6 10 14 15 22 26 27
*/

void solve(){
    int n, x;
    cin >> n >> x;
    vector<int> arr1(n);
    vector<int> arr2(n);

    for(int i = 0; i < n; i++) cin >> arr1[i];

    for(int i = 0; i < n; i++) cin >> arr2[i];

    bool found = true;
    for(int i = 0; i < n; i++){
        if(arr1[i] + arr2[n-1-i] > x){
            found = false;
            break;
        }
    }
    if( found ) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main(){
    int T;
    cin >> T;
    while((T--) != 0)
        solve();
    return 0;
}
