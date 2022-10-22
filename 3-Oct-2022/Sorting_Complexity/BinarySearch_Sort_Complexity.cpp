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
    srand(time(0));

    int n=100000;

    int *A = new int[n];

    for(int i=0;i<n;i++)
    {
        A[i]=rand()%1000;
    }

    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    BubbleSort(A,n);

    auto end1=chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
    time_taken1*=1e-9;
    cout<<"Data Size = "<<n<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(20);
    cout<<" sec"<<endl;

    cout<<".................................................."<<endl;

    auto start2 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    int result = BinarySearch(A,0,n-1,555);
    (result==-1)
        ?cout<<"Element is not present in Array"
        :cout<<"Element is present in Array ";
    cout<<endl;

    auto end2=chrono::high_resolution_clock::now();
    double time_taken2 =chrono::duration_cast<chrono::nanoseconds>(end2-start2).count();
    time_taken2*=1e-6;
    cout<<"Data Size = "<<n<<" and Time taken by program is : "<<fixed<<time_taken2<<setprecision(20);
    cout<<" milisec"<<endl;

    return 0;
}
