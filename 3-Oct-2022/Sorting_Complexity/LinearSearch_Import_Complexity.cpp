#include<bits/stdc++.h>
using namespace std;

int Search(int *x, int s, int k)
{
    for(int i=0;i<s;i++)
    {
        if(k==x[i])
        {
            return k;
        }
    }
    return -1;
}

void printArray(int *x, int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<x[i]<<endl;
    }
    cout<<endl;
}

int main()
{
    int n=10000000;
    int *A = new int[n];

    freopen("10000000-int.txt","r",stdin);

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    Search(A,n,000);
    int m = Search(A,n,000);
    if(m==-1)
    {
        cout<<"Element not present in this array.."<<endl;
    }
    else
    {
        cout<<"Element found !"<<endl;
    }

    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
    time_taken1 *=1e-6;
    cout<<"Data Size = "<<n<<" and Time taken by program is : " << fixed<<time_taken1<<setprecision(20);
    cout<< " milisec"<<endl;

    return 0;
}

