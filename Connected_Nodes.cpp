#include <bits/stdc++.h>

using namespace std;


int main()
{
    
   int n, e;
    cin >> n >> e;
    vector<int> v[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    int q;
    cin>>q;
    
    while(q--){
        int des;
        cin>>des;
        vector<int> finalres;
    
        for(int x:v[des]){
            finalres.push_back(x);
            // cout<<x<<" ";
        }
        sort(finalres.begin(), finalres.end(), greater <>());
        if(!finalres.empty()){
            for(int x:finalres){
            cout<<x<<" ";
        }
        }
        else{
            cout<<"-1";
        }
        
        cout<<endl;
    }
    
    
    return 0;
}