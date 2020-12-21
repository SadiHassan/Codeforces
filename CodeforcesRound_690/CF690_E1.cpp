//ACCEPTED!!!
#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll nPr(ll n, ll r){
    ll l = n - (n - r);
    ll ans = 1;
    while(n > l) { ans *= n; n--;}
    return ans;
}

int main(){

ll T;

//cout << nPr(2,2) << endl;
cin >> T;

for(ll t = 1; t <= T; t++){
    ll N;
    cin >> N;
    vector<ll> arr(N, 0);
    vector<ll> t_arr;

    map<ll, ll> m;
    for(ll i = 0; i < N; i++){
        cin >> arr[i];
        if(m.find(arr[i]) == m.end()) {
                m[arr[i]] = 1;
                t_arr.push_back(arr[i]);
            }
        else m[arr[i]] += 1;
    }
    sort(t_arr.begin(), t_arr.end());

    //for(ll i = 0; i < t_arr.size(); i++) cout << t_arr[i] << " " ; cout << endl;

    ll ans = 0;
    for(ll i = 0; i < t_arr.size(); i++){

        ll p = m[t_arr[i]];

        ll q= 0;
        ll r = 0;
        if(m.find(t_arr[i]+ 1) != m.end()) q = m[t_arr[i]+ 1];
        if(m.find(t_arr[i]+ 2) != m.end()) r = m[t_arr[i]+ 2];

        ans = (ans + p*q*r + p*q*(q-1)/2 + p*r*(r-1)/2 + p*(p-1)*q/2 + p*(p-1)*r/2 + p*(p-1)*(p-2)/6) % MOD;

    }
    cout << ans << endl;
}

return 0;
}
