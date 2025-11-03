#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int v,e;
    cin >> v >> e;

    vector <int> graph[v+1];

    for(int i=0;i<e;i++)
    {
        int a,b;
        cin >> a >> b;

        if(a==b){graph[a].push_back(b);}
        else {
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
}

    for (int i=1;i<=v;i++)
    {
        cout<<i << ": ";
        for(int j=0;j<graph[i].size();j++)
        {
            cout << graph[i][j]<<" ";
        }
        cout << endl;
    }

}

/*
4 5
1 2
1 3
2 3
3 4
4 4
  */
