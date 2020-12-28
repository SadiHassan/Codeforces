#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, c0, c1, h;
    string str;

    cin >> n >> c0 >> c1 >> h;
    cin >> str;

    int cost = 0;

    for(int i = 0; i < str.size(); i++){
        if(h >= c0 && h >= c1){
            if(str[i] == '0') cost += c0; else cost += c1;
            continue;
        }
        if(str[i] == '0'){
            if(c1 + h <= c0)
                cost += (c1 + h);
            else cost += c0;
        }
        else if(str[i] == '1'){
            if(c0 + h <= c1)
                cost += (c0 + h);
            else cost += c1;
        }
    }

    cout << cost << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--)
        solve();
    return 0;
}
