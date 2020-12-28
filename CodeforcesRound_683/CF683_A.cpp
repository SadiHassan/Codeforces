#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    cout << n << endl;
    for(int i = 1; i <= n; i++)
        cout << i << " ";
    cout << endl;
}
void solve_test(){
    int n;
    cin >> n;
    int tot = n * (n + 1) / 2;
    int sum = 0;
    int M = 0;
    //4 + 8 + 12 + 16 = 40 5--> 4,2
    for(int m = 1; m <= 1000; m++){
        sum += m * (n - 1);
        if((sum + tot) % n == 0){
            cout << "sum: " << sum << endl;
            cout << "sum+tot: " << sum + tot << endl;
            M = m;
            break;
        }
    }
    cout << "M: "<< M << endl;
    int target = (sum + tot) / n;
    cout << "target: " << target << endl;

}
/*
1 2 3
2 2 4 --> add 1 leave 2
4 4 4 --> add 2 leave 3

1 2 3 4 5
*/

int main(){
    int T;
    cin >> T;
    while((T--) != 0)
        solve();
    return 0;
}
/*
1 2 3

3
1 2 3

1 2 3
1 3 4
3 3 6
6 6 6

1 2 3 4
1 3 4 5
3 3 6 7
6 6 6 10
10 10 10 10
*/
