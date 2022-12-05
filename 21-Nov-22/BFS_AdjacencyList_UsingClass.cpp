#include<bits/stdc++.h>
using namespace std;

class Graph
{
private:
    vector<int> *G;
    int *visited;
    int *dis;
    int vertex;
    int edge;
public:
    Graph(){}

    Graph(int vertex)
    {
        this->vertex=vertex;

        G=new vector<int> [vertex];
        visited = new int[vertex];
        dis = new int[vertex];

        for(int i=0;i<vertex;i++)
        {
            visited[i]=0;
            dis[i]=0;
        }
    }

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
            for(int i=0;i<G[p].size();i++)
            {
                int next = G[p][i];
                if(visited[next]==0)
                {
                    Q.push(next);
                    visited[next]=1;
                    dis[next]=dis[p]+1;
                }
            }
        }
    }

    void print(int node)
    {
        cout<<endl;
        for(int i=0;i<node;i++)
        {
            cout<<i<<" -- >";
            for(int j=0;j<G[i].size();j++)
            {
                cout<<G[i][j]<<"  ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    void printDis(int source)
    {
        cout<<"\nDistance"<<endl;
        for(int i=0;i<vertex;i++)
        {
            cout<<"From Vertex "<<source<<" : To Vertex "<<i<<" : Distance is : "<<dis[i]<<endl;
        }
    }

    void addEdge(int x,int y)
    {
        G[x].push_back(y);
        G[y].push_back(x);
    }

};

int main()
{
    Graph gg;
    int vertex,edge,u,v;
    cin>>vertex>>edge;
    vector<int> *G=new vector<int> [vertex];

    gg = Graph(vertex);

    for(int k=0;k<edge;k++)
    {
        cin>>u>>v;
        gg.addEdge(u,v);
    }

    gg.print(vertex);

    int source;
    cout<<"Enter the Source for BFS : "<<endl;
    cin>>source;
    cout<<"Distance from : "<<source<<endl;
    cout<<"BFS is : ";
    gg.BFS(source);
    gg.printDis(source);

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
