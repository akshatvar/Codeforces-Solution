//problem url = "https://codeforces.com/problemset/problem/1985/B"

#include<iostream>
#include<algorithm>
using namespace std;

int getX(int n){
    int maxX = 0, X = 0;
    for(int i = 2; i <= n; i++){
        int k = n/i;
        int sumX = (k*i)*(k + 1)/2;
        if(maxX < sumX){
            X = i;
            maxX = sumX;
        }
    }
    return X;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int x = getX(n);
        cout<<x<<endl;
    }
    return 0;
}
