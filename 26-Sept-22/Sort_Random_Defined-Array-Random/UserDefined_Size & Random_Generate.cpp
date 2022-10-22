#include<bits/stdc++.h>
using namespace std;

int *printList(int *x,int s)
{
    int *p = new int[s];

    for(int i=0;i<s;i++)
    {
        p[i]=rand()%s+1;
    }

    return p;
}

int main()
{
    srand(time(0));
    int n;
    int a[]={};

    cout<<"Enter the size : "<<endl;
    cin>>n;

    freopen("random-int.txt","w",stdout);

    int *m= printList(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<m[i]<<endl;
    }

    return 0;
}
