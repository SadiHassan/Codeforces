//ACCEPTED!!!
#include<bits/stdc++.h>

using namespace std;

int main(){

int T;

cin >> T;

for(int t = 1; t <= T; t++){

    int N;
    cin >> N;

    vector<int> arr(N, 0);
    int sum = 0;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    for(int op = 0; op <= N; op++){
        if(sum % (N - op)) continue;
        int target = sum / (N - op);
        bool found = true;
        int temp_sum = 0;
        for(int i = 0; i < N; i++){
            temp_sum += arr[i];
            if(temp_sum > target){
                found = false;
                break;
            }
            if(temp_sum == target) {
                    temp_sum = 0;
            }

        }
        if(found) {cout << op << endl; break;}
    }

}

return 0;
}
