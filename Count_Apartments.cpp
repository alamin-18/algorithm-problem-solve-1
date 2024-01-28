#include <bits/stdc++.h>

using namespace std;

const int N = 1005;

int n, m;
char mat[N][N];
int vis[N][N];

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

bool valid(int x, int y)
{
    return !vis[x][y] && mat[x][y] != -1 && x >= 0 && x < n && y >= 0 && y < m;
}


void dfs(int si, int sj)
{
    // cout << si << " " << sj << endl;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + dx[i];
        int cj = sj + dy[i];
        if (valid(ci, cj) == true && mat[ci][cj]=='.' && vis[ci][cj] == false )
        {
            dfs(ci, cj);
        }
    }
}
int cout_ap(){
    int count=0;
     for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            // cout<<mat[i][j]<<" ";
            if(!vis[i][j] && mat[i][j]=='.' ){
                dfs(i,j);
                // cout<<mat[i][j]<<" ";
                count++;
            }
        }
        // cout<<endl;
    }
    return count;
}
int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        // string s;
        // cin >> s;
        for (int j = 0; j < m; j++)
        {
            // if (s[j] == '#')
                cin >>mat[i][j];
        }
    }
  
   cout<<cout_ap()<<endl;
    
    return 0;
}