// TLE :(
#include <bits/stdc++.h>
using namespace std;

int N;
vector< vector<long long> > arr;
vector< vector<long long> > dp;

long long _max(long long a, long long b){
    if(a >= b) return a;
    return b;
}

long long rec(int row, int col){

    if(col == N) return 0;

    if(dp[row][col] != -1) return dp[row][col];

    long long sum = arr[row][col];

    row = row ^ 1;
    long long ans = 0;
    for(int j = col + 1; j < N; j++){
        ans = _max(ans, rec(row, j));
    }

    dp[row ^ 1][col] = sum+ans;
    return dp[row ^ 1][col];
}

void print_debug(){
    cout << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < N; j++)
            cout << dp[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}
int main(){

    long long temp;
    cin >> N;
    vector<long long> t;
    arr.push_back(t);
    arr.push_back(t);
    dp.push_back(t);
    dp.push_back(t);

    for(int i = 0; i < N; i++){
        cin >> temp;
        arr[0].push_back(temp);
        dp[0].push_back(-1);
    }

    for(int i = 0; i < N; i++){
        cin >> temp;
        arr[1].push_back(temp);
        dp[1].push_back(-1);
    }

    long long ans = rec(0 , 0);

    //print_debug();

    /*
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < N; j++)
            dp[i][j] = -1;
    */
    ans = _max(ans, rec(1 , 0));

    //print_debug();

    cout << ans << endl;

    return 0;
}

