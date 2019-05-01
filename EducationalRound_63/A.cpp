#include <iostream>
#include <vector>
using namespace std;

int main(){

int N;
string str;

cin >> N;
cin >> str;
char min_char = 'z' + 1;

vector<int> index_arr(N);

for(int i = N - 1; i >= 0 ; i--){
    if(str[i] < min_char){
        min_char = str[i];
        index_arr[i] = i;
    }
    else index_arr[i] = index_arr[i + 1];
}

bool found = false;
int left, right;
for(int i = 0; i < N - 1; i++){
    char min_char_on_my_right = str[index_arr[i + 1]];
    if(str[i] > min_char_on_my_right){
        found = true;
        left = i;
        right = index_arr[i + 1];
        break;
    }
}

if(!found) cout << "NO" << endl;
else {
        cout << "YES" << endl;
        cout << left+1 << " " << right+1 << endl;
}
return 0;
}
