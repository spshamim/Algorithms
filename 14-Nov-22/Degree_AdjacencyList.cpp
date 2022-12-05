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
#define pb push_back

void printGraph(vt<int> *p, int n)
{
    for(int i=0;i<n;i++)
    {
        print<<i<<"-->";
        for(int j=0;j<p[i].size();j++)
        {
            print<<p[i][j]<<"  ";
        }
        print<<endl;
    }
}

void countDegree(vt<int> *p, int n)
{
    int *degree = new int[n];

    for(int i=0;i<n;i++)
    {
        degree[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        degree[i]=p[i].size();
    }

    for(int j=0;j<n;j++)
    {
        print<<"Node = "<<j<<" and Degree = "<<degree[j]<<endl;
    }
}
int main()
{
	int node, edge;
	print<<"Enter size of node and edge : "<<endl;
	read>>node>>edge;

	vt<int> *m = new vt<int>[node];

    int u,v;
    print<<"Enter all edges : "<<endl;
    for(int i=0;i<edge;i++) //Edge Input
    {
        read>>u>>v;
        m[v].pb(u);
        m[u].pb(v);
    }
    print<<"Adjacency List : "<<endl;
    printGraph(m,node);
    print<<"Degree : "<<endl;
    countDegree(m,node);

	return 0;

    /*
0 1
0 2
1 4
2 4
1 5
2 3
3 4
4 5
4 6
3 6
    */
	return 0;
}

