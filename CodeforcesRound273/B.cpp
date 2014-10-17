//NOT ACCETED :(
#include<iostream>
using namespace std;

int main(){

long long N, M;

cin>>N>>M;

long long small;// = N/M;
long long big;// = N - small*(M-1);
long long small_val;
long long mm = 1000000000+5;
if(N>=M)
        //cout<<( big*(big-1)/2 + (small*(small-1)/2)*(M-1) )<<" ";
        {
            long long t=1;

            while(t<=N){

                if(t>1000) break;
                small = t*(t-1)/2;
                small = small*(M-1);

                if(small==0) big = N - (M-1);
                else big = N - t*(M-1);
                big = big*(big-1)/2;

                if(small+big < mm) mm = small+big;
                //cout<<t<<" "<<mm<<endl;
                t++;

            }
        cout<<mm<<" ";
        }
else    cout<<"0 ";

long long k_max = N - (M-1);
if(N>=M)
    cout<<k_max*(k_max-1)/2<<endl;
else cout<<"0"<<endl;

return 0;
}
