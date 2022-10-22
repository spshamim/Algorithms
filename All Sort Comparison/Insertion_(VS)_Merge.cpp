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

void insertionSort(int *x, int s)
{
    int key;
    for(int i=1;i<s;i++)
    {
        key=x[i];
        int j=i-1;

        while(j>=0&&x[j]>key)
        {
            x[j+1]=x[j];
            j=j-1;
        }
        x[j+1]=key;
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
    int *i1 = Array1(s);
    int *m1 = new int[s];

    for(int i=0;i<s;i++)
    {
        m1[i] = i1[i];
    }

    cout<<"<============= For INSERTION SORT, Time Complexity is Below ================>"<<endl;
    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    insertionSort(i1,s);

    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
    time_taken1 *= 1e-9;
    cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
    cout<<" second"<<endl;

    cout<<"<============= For MERGE SORT, Time Complexity is Below =============>"<<endl;
    start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    MergeSort(m1,0,s-1);

    end1 = chrono::high_resolution_clock::now();
    time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
    time_taken1 *= 1e-9;
    cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
    cout<<" second"<<endl;

    return 0;
}
