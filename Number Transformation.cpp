#include <bits/stdc++.h>
using namespace std;

vector<int>prm[1001];
void prim(int n)
{
    int posi = n;
    int div = 2;
    int add = 0;
    while(n>1)
    {
        add = 0;
        while(n%div == 0)
        {
            n/=div;
            add = div;
        }
        div++;
        if(add)
            prm[posi].push_back(add);
    }
    if(add == posi )
        prm[posi].clear();
}
int bfs(int from, int to)
{
    int dist[1001];
    memset(dist,-1,sizeof(dist));
    dist[from] = 0;
    queue<int>q;
    q.push(from);
    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        int dest;
        for(int i=0; i<prm[curr].size(); i++)
        {
            dest = curr+prm[curr][i];
            if(dest<=to && dist[dest]==-1)
            {
                q.push(dest);
                dist[dest] = dist[curr]+1;
                if(dest == to)
                    return dist[to];
            }

        }
    }
    return dist[to];
}
int  main()
{
    for (int i=2; i<1001; i++)
        prim(i);
    int t;
int cas = 1;
    cin>>t;
       int from, to;
    while(t--)
    {
        cin>>from >> to;
    cout<<"Case "<<cas++<<": "<<bfs(from,to)<<endl;

    }
}
