#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

bool prime[200000+1];

void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
}

int main(){

    SieveOfEratosthenes(200000);

    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> prime_arr;
    vector<int> ans;

    int ones = 0, twos = 0;

    for(int i = 0; i < 200000; i++){
        if(prime[i]) prime_arr.push_back(i);
        if(prime_arr.size() == n) break;
    }

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 1) ones++;
        else twos++;
    }

    //for(int i = 0; i < n; i++) cout << prime_arr[i] << " "; cout << endl;

    int index = 0;
    int sum = 0;

    while(1){
        int diff = prime_arr[index] - sum;

        if(diff == 1){
                if(ones > 0){
                    ans.push_back(1);
                    ones--;
                    index++;
                    sum = sum + 1;
                }
                else if(twos > 0){
                    ans.push_back(2);
                    twos--;
                    index++;
                    sum = sum + 2;
                }
        }
        else if(diff == 2){
                if(twos > 0){
                    ans.push_back(2);
                    twos--;
                    index++;
                    sum = sum + 2;
                }
                else if(ones > 0){
                    ans.push_back(1);
                    ones--;
                    //index++;
                    sum = sum + 1;
                }
        }
        else if(diff > 2){
                if(twos > 0) {
                        sum = sum + 2;
                        twos--;
                        ans.push_back(2);
                }
                else if(ones > 0) {
                        sum = sum + 1;
                        ones--; ans.push_back(1);
                }
        }
        //else break;

        if(ones==0 && twos==0) break;
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i];
        if( i < ans.size()-1 ) cout << " ";
    }
    cout << endl;
    return 0;
}
