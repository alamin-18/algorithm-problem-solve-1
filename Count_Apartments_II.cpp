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


int dfs(int si, int sj)
{
    
    int count=0;
    vis[si][sj] = true;
    count++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + dx[i];
        int cj = sj + dy[i];
        if (valid(ci, cj) == true && mat[ci][cj]=='.' && vis[ci][cj] == false )
        {
            
           count+=dfs(ci, cj);
            
        }
    }
    return count;
}

int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < m; j++)
        {
                cin >>mat[i][j];
        }
    }

    vector<int> v;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            
            if(!vis[i][j] && mat[i][j]=='.' ){
                v.push_back(dfs(i,j));
            }
        }
    }
    sort(v.begin(),v.end());
    if(!v.empty()){
        for(int x:v){
        cout<<x<<" ";
    }
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}