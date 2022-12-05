#include<bits/stdc++.h>
using namespace std;

#define m 100
vector<int> G[m];
int visited[m];
int dis[m];
int node,edge;

vector<int> adj_[Node];

void BFS(int v)
{
    queue<int> Q;
    Q.push(v);
    visited[v]=1;
    dis[v]=0;

    while(!Q.empty())
    {
        int p = Q.front();
        Q.pop();
        cout<<p<<"  ";
        for(auto v : adj_[p])
        {
            if(!visited[v])
            {
                Q.push(v);
                visited[v]=1;
                dis[v]=dis[p]+1;
            }
        }
    }
}

void print(vector<int> *p, int node)
{
    cout<<endl;
    for(int i=0;i<node;i++)
    {
        cout<<i<<" -- >";
        for(int j=0;j<p[i].size();j++)
        {
            cout<<p[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void printDis(int source)
{
    cout<<"\nDistance"<<endl;
    for(int i=0;i<node;i++)
    {
        cout<<source<<"  "<<i<<"  "<<dis[i]<<endl;
    }
}

void addEdge(int x,int y)
{
    G[x].push_back(y);
    G[y].push_back(x);
}

int main()
{
    cin>>node>>edge;

    int u,v;

    for(int k=0;k<edge;k++)
    {
        cin>>u>>v;
        addEdge(u,v);
    }

    print(G,node);
    int source;
    cout<<"Enter the Source for BFS : "<<endl;
    cin>>source;
    cout<<"Distance from : "<<source<<endl;
    cout<<"BFS is : ";
    BFS(source);
    printDis(source);

    return 0;
}
/*
11 13
0 1
0 2
1 2
1 3
2 3
3 4
4 5
5 2
6 4
7 8
8 10
9 7
10 7
*/
