#include<bits/stdc++.h>
using namespace std;

class Graph
{
 public:
    vector<int> *G;
    int *visited;
    int *dis;
    vector<int> *adj;
    int vertex,edge;

    Graph(){}

    Graph(int vertex)
    {
        this->vertex=vertex;

        G=new vector<int> [vertex];
        visited = new int[vertex];
        dis = new int[vertex];
        adj = new vector<int> [vertex];

        for(int i=0;i<vertex;i++)
        {
            visited[i]=1;
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
            for(auto v : adj[p])
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

    void printGraph(int **p, int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<p[i][j]<<"\t";
            }
            cout<<endl;
        }
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
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

};


int main()
{
	Graph gg;
	int vertex, edge;
	cin>>vertex>>edge;
	gg = Graph(vertex);

	int **m = new int*[vertex]; //Dynamic memory allocation
	for(int i=0;i<vertex;i++) //2D-Array size = node size
    {
        m[i]=new int[vertex];
    }

    for(int i=0;i<vertex;i++) //Zero initialization
    {
        for(int j=0;j<vertex;j++)
        {
            m[i][j]=0;
        }
    }

	int u,v;
    for(int i=0;i<edge;i++) //Where edge(Relation) exist, putting 1 to this Location
    {
        cin>>u>>v;
        m[u][v]=m[v][u]=1; // Edge input (Loop will run till the size of Edge)
    }

    for(int i=0;i<vertex;i++)
    {
        for(int j=0;j<vertex;j++)
        {
            if(m[i][j])
            gg.addEdge(i,j);
        }
    }

    cout<<"\nAdjacency Matrix : "<<endl;
    gg.printGraph(m,vertex);

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
