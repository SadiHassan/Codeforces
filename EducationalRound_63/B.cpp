#include <iostream>
#include <vector>
using namespace std;

int main(){

int N;
string str;

cin >> N;
cin >> str;

int opponent_move = (N-11)/2;
int eights = 0;

for(int i = 0; i < N; i++)
    if(str[i] == '8') eights++;

if(eights <= opponent_move)
    cout << "NO" << endl;
else
    cout << "YES" << endl;

return 0;
}
/*
29
88811188118181818118111111111

8 = 10 ta
others = 19 ta
move = 29 - 11 = 18 ta
NO
*/
