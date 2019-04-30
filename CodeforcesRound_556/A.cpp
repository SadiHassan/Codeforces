#include <iostream>
#include <vector>
using namespace std;

int main(){

int n, m , r;

cin >> n >> m >> r;

vector<int> buy(n);
vector<int> sell(m);
int min_buy = 10000;
int max_sell = -1;
for(int i = 0; i < n; i++) {
    cin >> buy[i];
    min_buy = min(min_buy, buy[i]);
}

for(int i = 0; i < m; i++){
    cin >> sell[i];
    max_sell = max(max_sell, sell[i]);
}

int total_share = r/min_buy;
int remaining_money = r%min_buy;
int end_day_money = r;
if(max_sell > min_buy && ( total_share*max_sell + remaining_money > end_day_money)){
    end_day_money = total_share*max_sell + remaining_money;
}
cout << end_day_money << endl;
return 0;
}
