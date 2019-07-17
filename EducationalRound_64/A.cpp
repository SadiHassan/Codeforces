#include <iostream>
#include <algorithm>
using namespace std;

bool adjacent(char ch1, char ch2){
    if(ch1 == 'a' && ch2 == 'z') return true;
    if(ch1 == 'z' && ch2 == 'a') return true;
    if(abs(ch1 - ch2)==1) return true;
    return false;
}

int main(){

int N;
cin >> N;

for(int n = 1; n <= N; n++){
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    string ans = "";

        for(int i = 0; i < str.size() - 1; i++){
            if(adjacent(str[i],str[i+1])){
                for(int j = i + 2; j < str.size(); j++){
                    if(!adjacent(str[i] , str[j]) && !adjacent(str[i+1] , str[j])){
                        char ch = str[j];
                        str[j] = str[i+1];
                        str[i+1] = ch;
                        break;
                    }
                }
            }
        }
    cout << str << endl;
    }
return 0;
}
