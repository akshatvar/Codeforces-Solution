//problem url = "https://codeforces.com/problemset/problem/1985/D"

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<char>> v(n,vector<char> (m));
        int a = 0,b = 0, count = 0, prev = 0;
        bool first = true;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                char c;
                cin>>c;

                if(c == '#' && first){
                    b = j;
                    first = false;
                }

                if(c == '#'){
                    count++;
                }

                v[i][j] = c;
            }

            if(count >= prev){
                a = i;
                prev = count;
            }
            count = 0;
        }

        cout<<a+1<<" "<<b+1<<endl;
    }
    return 0;
}
