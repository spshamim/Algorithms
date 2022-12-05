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

int main()
{
	vt<int> m[7];

	int node, edge;
	print<<"Enter size of node and edge : "<<endl;
	read>>node>>edge;

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

	return 0;
}

