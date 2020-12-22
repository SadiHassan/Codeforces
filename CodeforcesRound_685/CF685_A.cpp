#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;
    cin >> N;
    if(N == 1) cout << "0" << endl;
    else if(N == 2) cout << "1" << endl;
    else if(N == 3) cout << "2" << endl;
    else if(N % 2 == 0) cout << "2" << endl;
    else cout << "3" << endl;
}

int main(){

int T;

cin >> T;

while(T--){
    solve();
}
return 0;
}
