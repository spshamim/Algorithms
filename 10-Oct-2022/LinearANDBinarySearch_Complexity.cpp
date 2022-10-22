#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int *x, int s)
{
    for(int i=0;i<s-1;i++)
    {
       for(int j=0;j<s-i-1;j++)
       {
            if(x[j]>x[j+1])
            {
                swap(x[j],x[j+1]);
            }
       }
    }
}

int BinarySearch(int *x, int left, int right, int k)
{
    if(right>=left)
    {
        int mid=left+(right-left)/2;
        if(x[mid]==k)
        {
            return mid;
        }
        if(x[mid]>k)
        {
           return BinarySearch(x,left,mid-1,k);
        }
        return BinarySearch(x,mid+1,right,k);
    }
    return -1;
}

int LinearSearch(int *x, int s, int k)
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
    int n=100000;
    int *A = new int[n];

    ifstream fin("100000-int.txt");

    for(int i=0;i<n;i++)
    {
        fin>>A[i];
    }

    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    int result = LinearSearch(A,n,9999999);

    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
    time_taken1 *=1e-9;
    cout<<"Data Size = "<<n<<" and Time taken by program is : " << fixed<<time_taken1<<setprecision(20);
    cout<< " microsec"<<endl;

    (result==-1)
        ?cout<<"Element is not present in Array"
        :cout<<"Element is present in Array ";
    cout<<endl;

    BubbleSort(A,n);

    start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    int result2 = BinarySearch(A,0,n-1,9999999);

    end1=chrono::high_resolution_clock::now();
    time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
    time_taken1*=1e-9;
    cout<<"Data Size = "<<n<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(20);
    cout<<" microsec"<<endl;

    (result2==-1)
        ?cout<<"Element is not present in Array"
        :cout<<"Element is present in Array ";
    cout<<endl;

    return 0;
}
