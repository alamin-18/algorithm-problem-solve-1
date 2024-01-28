#include <bits/stdc++.h>

using namespace std;
// const int  n=1e6+5;
//  vector<int>v[n];

// bool vis[n];

// void dfs(int src)
// {
//     cout << src << endl;
//     vis[src] = true;
//     for (int child : v[src])
//     {
//         if (vis[child] == false)
//             dfs(child);
//     }
// }

int main()
{
    
   int n,e;
   cin>>n>>e;
    int mat[e][e];
    memset(mat, 0, sizeof(mat));
   while(e--){
    int a,b;
    cin>>a>>b;
    mat[a][b] = 1;
    // mat[b][a] = 1;
   }
   for(int i=0;i<e;i++){
    for(int j=0;j<e;j++){
         cout<<mat[i][j]<<" ";
    }
    cout<<endl;
   }
   
   
   int q;
   cin>>q;
   while(q--){
        int a,b;
        cin>>a>>b;
        if(mat[a][b]==1){
            cout<<"YES"<<endl;
            // cout<<mat[a][b]<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
   }
    // memset(vis, false, sizeof(vis));
    // dfs(0);
    return 0;
}