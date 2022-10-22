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

    int n=1000;
    //cin>>n;
    while(n<=100000)
    {
    int *A = new int[n];

    for(int i=0;i<n;i++)
    {
        A[i]=rand()%10000;
    }
    //cout<<"UnSorted Array: \n"<<endl;
    //printArray(A,n);

    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    BubbleSort(A,n);
    //cout <<"Sorted Array: \n";
    //printArray(A,n);
    /*.....................Time taken by 1st Algorithm........................"*/
    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 *= 1e-6;
    cout << "Data Size = "<<n<<" and Time taken by program is : " << fixed
         << time_taken1 << setprecision(20);
    cout << " milisec" << endl;
    n+=100;
    delete A;
    }

    return 0;
}
