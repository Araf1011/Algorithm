#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int vertex, edge;
    cin >> vertex >> edge;
    
    vector<int>adj[vertex + 1];
    for(int i = 0; i< edge ; i++)
    {
        int a,b;
        cin >> a >> b;
        
        if(a==b)
        {
            adj[a].push_back(b);
        }
        else
        {
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

    }
    for(int i = 1; i<= vertex ; i++)
    {
        cout << i << " -> ";
        for(int j = 0; j< adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

}
