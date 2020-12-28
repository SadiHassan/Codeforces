#include <bits/stdc++.h>
using namespace std;

int dist(int x1, int y1, int x2, int y2){
    return abs(x1 - x2) + abs(y1 - y2);
}

void solve(){
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    cout << max( dist(1,1,r,c), max(dist(n,1,r,c), max(dist(n,m,r,c), dist(1,m,r,c)) ) ) << endl;

}

int main(){

int T;

cin >> T;

while(T--){
    solve();
}
return 0;
}
