#include<bits/stdc++.h>
using namespace std;

int *Array1(int s)
{
    int *A1 = new int[s];
    for(int i=0;i<s;i++)
    {
        A1[i]=rand();
    }
    return A1;
}

int partition(int *m,int s,int e)
{
	int pivot=m[s];

	int count=0;
	for(int i=s+1;i<=e;i++)
    {
		if(m[i]<=pivot) count++;
	}

	int pivotIndex=s+count;
	swap(m[pivotIndex],m[s]);

	int i=s,j=e;

	while(i<pivotIndex && j>pivotIndex)
    {
		while(m[i]<=pivot) i++;
		while(m[j]>pivot) j--;
		if(i<pivotIndex && j>pivotIndex) swap(m[i++],m[j--]);
	}
	return pivotIndex;
}

void QuickSort(int *m,int s,int e)
{
	if(s>=e)
    return;

	int p=partition(m,s,e);
	QuickSort(m,s,p-1);
	QuickSort(m,p+1,e);
}

void selectionSort(int *x, int s)
{
    int min_idx;

    for(int i=0;i<s-1;i++)
    {
        min_idx=i;
        for(int j=i+1;j<s;j++)
        {
            if(x[j]<x[min_idx])
            {
                min_idx=j;
            }
            if(min_idx!=i)
            {
                swap(x[min_idx], x[i]);
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
    int s;
    cout<<"Enter Array Size : "<<endl;
    cin>>s;
    int *s1 = Array1(s);
    int *q1 = new int[s];

    for(int i=0;i<s;i++)
    {
        q1[i] = s1[i];
    }

    cout<<"<============= For INSERTION SORT, Time Complexity is Below ================>"<<endl;
    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    selectionSort(s1,s);

    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
    time_taken1 *= 1e-9;
    cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
    cout<<" second"<<endl;

    cout<<"<============= For QUICK SORT, Time Complexity is Below =============>"<<endl;
    start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    QuickSort(q1,0,s-1);

    end1 = chrono::high_resolution_clock::now();
    time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
    time_taken1 *= 1e-9;
    cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
    cout<<" second"<<endl;

    return 0;
}