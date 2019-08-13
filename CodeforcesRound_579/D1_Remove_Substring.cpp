#include <iostream>
using namespace std;

int main(){

string str1, str2;

cin >> str1 >> str2;
int ind = 0;
int len = str1.size();

for(int i = 0; i < str1.size(); i++){
    if(str1[i] == str2[ind]){
        ind++;
        len--;
    }
    if(ind == str2.size())
        len--;
}

cout << len << endl;

return 0;
}
