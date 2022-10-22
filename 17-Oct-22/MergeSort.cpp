#include<bits/stdc++.h>
using namespace std;

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
}

int main()
{
	int n;
	cout<<"Enter the size of array : "<<endl;
	cin>>n;
    cout<<endl<<endl;
	int *A = new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<endl<<endl;

	MergeSort(A,0,n-1);

	cout<<"Sorted array is : "<<endl;
	cout<<endl<<endl;
	printArray(A,n);

	return 0;
}
