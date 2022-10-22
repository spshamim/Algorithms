#include<bits/stdc++.h>
using namespace std;

int *mergelist(int *a,int *b,int n,int m)
{
    int *c = new int[n+m];
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }
    }
    while(i<n)
    {
        c[k++]=a[i++];
    }
    while(j<m)
    {
        c[k++]=b[j++];
    }

    return c;
}

void printlist(int *x,int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<x[i]<<endl;
    }
}

int main()
{
    int n;
    int m;
    cout<<"Size of First Array : "<<endl;
    cin>>n;
    cout<<"Size of Second Array : "<<endl;
    cin>>m;

    int *A = new int[n];
    int *B = new int[m];

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<endl<<endl;
    for(int j=0;j<m;j++)
    {
        cin>>B[j];
    }
    cout<<endl<<endl;

    printlist(A,n);
    cout<<"******************************"<<endl;
    printlist(B,m);
    cout<<"******************************"<<endl;
    int *u = mergelist(A,B,n,m);
    printlist(u,n+m);

    return 0;
}
