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

void Merge(int *A, int left, int mid,int right)
{
	int n1=mid-left+1;
	int n2=right-mid;

	int *L = new int[n1];
    int *R = new int[n2];

	for(int i=0;i<n1;i++)
    {
        L[i] = A[left+i];
    }

	for(int j=0;j<n2;j++)
    {
        R[j]=A[mid+1+j];
    }

	int nn1=0,nn2=0,k=left;

	while(nn1<n1 && nn2<n2)
    {
		if(L[nn1]<= R[nn2])
        {
			A[k]=L[nn1];
			nn1++;
		}
		else
        {
			A[k]=R[nn2];
			nn2++;
		}
		k++;
	}

	while(nn1<n1)
    {
		A[k]=L[nn1];
		nn1++;
		k++;
	}

	while(nn2<n2)
    {
        A[k]=R[nn2];
		nn2++;
		k++;
	}

	delete[] L;
	delete[] R;
}

void MergeSort(int *x, int left, int right)
{
	if(left>=right)
    return;
    {
        int mid = left+(right-left)/2;
        MergeSort(x,left,mid);
        MergeSort(x,mid+1,right);
        Merge(x,left,mid,right);
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
    int *m1 = Array1(s);
    int *q1 = new int[s];

    for(int i=0;i<s;i++)
    {
        q1[i] = m1[i];
    }

    cout<<"<============= For MERGE SORT, Time Complexity is Below ================>"<<endl;
    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    MergeSort(m1,0,s-1);

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
