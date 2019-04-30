#include <iostream>
#include <vector>
using namespace std;

int main(){

int n;
string str;

cin >> n;
vector<string> arr(n);
for(int i = 0; i < n; i++)
    cin >> arr[i];

for(int i = 1; i < n - 1; i++){
    for(int j = 1; j < n - 1; j++){
        if(arr[i][j] == '.' && arr[i-1][j] == '.' && arr[i+1][j] == '.' && arr[i][j-1] == '.' && arr[i][j+1] == '.'){
            arr[i][j] = '#';
            arr[i-1][j] = '#';
            arr[i+1][j] = '#';
            arr[i][j-1] = '#';
            arr[i][j+1] = '#';
        }
    }
}

bool yes = true;
for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) if(arr[i][j] == '.') {yes = false; break; }

if(yes) cout << "YES";
else cout << "NO";

cout << endl;
return 0;
}
