#include<bits/stdc++.h>
using namespace std;

#define vt vector
#define stt string
#define read cin
#define print cout
#define ll long long
#define ld long double
#define st stack
#define qu queue

void printGraph(int **p, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            print<<p[i][j]<<"\t";
        }
        print<<endl;
    }
}

int main()
{
	int node, edge;
	print<<"Enter size of node and edge : "<<endl;
	read>>node>>edge;

	int **m = new int*[node]; //Dynamic memory allocation
	for(int i=0;i<node;i++) //2D-Array size = node size
    {
        m[i]=new int[node];
    }

    for(int i=0;i<node;i++) //Zero initialization
    {
        for(int j=0;j<node;j++)
        {
            m[i][j]=0;
        }
    }

	int u,v;
	print<<"Enter all edges : "<<endl;
    for(int i=0;i<edge;i++) //Where edge(Relation) exist, putting 1 to this Location
    {
        read>>u>>v;
        m[u][v]=m[v][u]=1; // Edge input (Loop will run till the size of Edge)
    }
    print<<"Adjacency Matrix : "<<endl;
    printGraph(m,node);

	return 0;
}
