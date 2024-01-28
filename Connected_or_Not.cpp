#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int mat[n][n];
    memset(mat, 0, sizeof(mat));
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        // mat[b][a] = 1;
    }
  
    int q;
   cin>>q;
   while(q--){
        int a,b;
        cin>>a>>b;
        if(mat[a][b]==1 || a==b){
            cout<<"YES"<<endl;
            // cout<<mat[a][b]<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
   }
    return 0;
}