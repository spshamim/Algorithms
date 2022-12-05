#include<bits/stdc++.h>
using namespace std;

int *f(int c[], int n)
{
    int *p = new int[n];
    for(int i=0;i<n;i++)
    {
        p[i]=c[i]*2;
    }

    return p;
}

int main()
{

    int a[4]={10,20,30,40};

    int *k=f(a,4);

    for(int i=0;i<4;i++)
    {
        cout<<k[i]<<endl;
    }

    return 0;
}
