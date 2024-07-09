problem url = "https://codeforces.com/problemset/problem/1389/A"

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l, r;
        cin>>l>>r;

        int x = l;
        int m = r/x;
        int y = x*m;

        if(x == y){
            cout<<-1<<" "<<-1<<endl;
        }
        else{
            cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}
