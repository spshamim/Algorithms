#include<bits/stdc++.h>
using namespace std;

//The row graph[i] represents i-th edge with
//three values u, v and w.

void BellmanFord(int graph[][3], int V, int E,int src)
{
	int dis[V];
	for(int i=0;i<V;i++)
    {
        dis[i]=INT_MAX; //Initialize distance of all vertex as infinite.
    }
	dis[src]=0; //Source distance zero

	for(int i=0;i<V-1;i++) //|V|-1 iteration
    {
		for(int j=0;j<E;j++)
		{
			if(dis[graph[j][0]] != INT_MAX&&dis[graph[j][0]]+graph[j][2]<dis[graph[j][1]]) //d(u)+c(u,v)<d(v)
            {
                dis[graph[j][1]]=dis[graph[j][0]]+graph[j][2]; //d(v)=d(u)+c(u,v)
            }
		}
	}

	for(int i=0;i<E;i++) //Iteration again to check negative cycle
    {
		int x=graph[i][0];
		int y=graph[i][1];
		int weight=graph[i][2];

		if(dis[x] != INT_MAX&&dis[x]+weight<dis[y])
        {
            cout<<"Graph contains negative weight cycle"<<endl;
        }
	}

	cout<<"Vertex Distances : "<<endl;
	for(int i=0;i<V;i++)
    {
        cout<<"From :  "<<src<<"\t"<<" To :  "<<i<<"\t"<<" Distance :  "<<dis[i]<<endl;
    }
}

int main()
{
	int V = 10; // Number of vertex in graph
	int E = 18; // Number of edges in graph

	// Every edge has three values (u, v, w) where
	// the edge is from vertex u to v. And weight
	// of the edge is w.

    int graph[][3] = { { 0 ,1 ,3 },{ 0 ,2, 5 },{ 0 ,4 ,4 },{ 1 ,4, 1 },
                    { 2, 4, 2 },{ 2 ,3, 2 },{ 3 ,4, -1 },{ 1 ,7, 4 },
                    { 4 ,7, -2 },{ 4 ,6, 3 },{ 3 ,5 ,3 },{ 5 ,6, 2 },
                    { 7 ,6, 2 },{ 7 ,9, 5 },{ 6 ,9, 2 },{ 6 ,8, 5 },
                    { 5 ,8 ,4 },{ 8 ,9, 5 } };

	BellmanFord(graph, V, E, 0);

	return 0;
}
