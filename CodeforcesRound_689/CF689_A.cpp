#include <bits/stdc++.h>
using namespace std;

int dist(int x1, int y1, int x2, int y2){
    return abs(x1 - x2) + abs(y1 - y2);
}

void solve(){
    int n, k;
    cin >> n >> k;

    string str = "";
    int kk = 0;
    for(int i = 0; i < n; i++){
        if( (i+1) % 3 == 1) str += 'a';
        else if( (i+1) % 3 == 2) str += 'b';
        else if( (i+1) % 3 == 0) str += 'c';
        /*
        if(i == n - 1 && str[0] == str[i]){
            str[i] = 'b';
        }*/
    }
    cout << str << endl;
}

int main(){

int T;

cin >> T;

while(T--){
    solve();
}
return 0;
}
