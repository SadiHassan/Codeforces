#include<iostream>
using namespace std;

int main(){

string s, t;

cin>>s>>t;
int ind = -1;

for(int i=0; i<s.size();i++){

    if(t[i]>s[i]){
        ind = i;
        break;
    }

}
if(s.size()==1 ){
    if( t[0]-s[0] > 1){
        s[0] += 1;
        cout<<s<<endl;
    }
    else cout<<"No such string"<<endl;
}
else if(ind==-1 || ((ind==(s.size()-1)) && s.size()!=1 ) ) cout<<"No such string"<<endl;
else{
    s[ind+1] = s[ind+1] + 1;
    cout<<s<<endl;
}
return 0;
}
