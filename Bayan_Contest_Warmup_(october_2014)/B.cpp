/*
I am proud of myself for this solution.
Because, I checked many codes of the top contestants of this contest and found that
everyone's code is much bigger than my one.
But, there can be a possibility that, the test cases were not strongly defined.
If that is the case, then my solution would be faulty...  :(
Till then, I am happy with my shortest code!!!
*/
#include<iostream>

using namespace std;

int main(){

    int N, M;
    string row, col;

    cin>>N>>M;
    cin>>row;
    cin>>col;

    if(row[0]=='<'&&col[0]=='^') cout<<"NO"<<endl;
    else if(row[N-1]=='<'&&col[0]=='v') cout<<"NO"<<endl;
    else if(row[0]=='>'&&col[M-1]=='^') cout<<"NO"<<endl;
    else if(row[N-1]=='>'&&col[M-1]=='v') cout<<"NO"<<endl;
    else  cout<<"YES"<<endl;

    return 0;
}
