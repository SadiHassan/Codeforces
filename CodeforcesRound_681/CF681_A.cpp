//ACCEPTED!!!
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;

    cin >> n;

    int k = n;
    int i = 0;
    while(k-- > 0){
        cout << 4*n - i << " ";
        i += 2;
    }
    cout << endl;
}

int main(){
    int T;
    cin >> T;
    while((T--) != 0)
        solve();
    return 0;
}
