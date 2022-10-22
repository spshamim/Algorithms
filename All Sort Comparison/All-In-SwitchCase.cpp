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

int main()
{
    cout<<"\tSelect the Desired one >:"<<endl;
    cout<<"\t\t 1.   Complexity Difference Between BUBBLE SORT AND INSERTION SORT"<<endl;
    cout<<"\t\t 2.   Complexity Difference Between BUBBLE SORT AND SELECTION SORT"<<endl;
    cout<<"\t\t 3.   Complexity Difference Between BUBBLE SORT AND MERGE SORT"<<endl;
    cout<<"\t\t 4.   Complexity Difference Between BUBBLE SORT AND QUICK SORT"<<endl;
    cout<<"\t\t 5.   Complexity Difference Between INSERTION SORT AND SELECTION SORT"<<endl;
    cout<<"\t\t 6.   Complexity Difference Between INSERTION SORT AND MERGE SORT"<<endl;
    cout<<"\t\t 7.   Complexity Difference Between INSERTION SORT AND QUICK SORT"<<endl;
    cout<<"\t\t 8.   Complexity Difference Between SELECTION SORT AND MERGE SORT"<<endl;
    cout<<"\t\t 9.   Complexity Difference Between SELECTION SORT AND QUICK SORT"<<endl;
    cout<<"\t\t10.   Complexity Difference Between MERGE SORT AND QUICK SORT"<<endl;
    cout<<"\tEnter Your choice : "<<endl;
    int choice;
    cin>>choice;

    int s;
    cout<<"Enter Array Size : "<<endl;
    cin>>s;
    int *b1 = Array1(s);
    int *b2 = new int[s];
    int *b3 = new int[s];
    int *b4 = new int[s];

    int *i1 = new int[s];
    int *i2 = new int[s];
    int *i3 = new int[s];
    int *i4 = new int[s];

    int *s1 = new int[s];
    int *s2 = new int[s];
    int *s3 = new int[s];
    int *s4 = new int[s];

    int *m1 = new int[s];
    int *m2 = new int[s];
    int *m3 = new int[s];
    int *m4 = new int[s];

    int *q1 = new int[s];
    int *q2 = new int[s];
    int *q3 = new int[s];
    int *q4 = new int[s];

    for(int i=0;i<s;i++)
    {
        b2[i] = b1[i];
    }
    for(int i=0;i<s;i++)
    {
        b3[i] = b1[i];
    }
    for(int i=0;i<s;i++)
    {
        b4[i] = b1[i];
    }
    for(int i=0;i<s;i++)
    {
        i1[i] = b1[i];
    }
    for(int i=0;i<s;i++)
    {
        i2[i] = b1[i];
    }
    for(int i=0;i<s;i++)
    {
        i3[i] = b1[i];
    }
    for(int i=0;i<s;i++)
    {
        i4[i] = b1[i];
    }
    for(int i=0;i<s;i++)
    {
        s1[i] = b1[i];
    }
    for(int i=0;i<s;i++)
    {
        s2[i] = b1[i];
    }
    for(int i=0;i<s;i++)
    {
        s3[i] = b1[i];
    }
    for(int i=0;i<s;i++)
    {
        s4[i] = b1[i];
    }
    for(int i=0;i<s;i++)
    {
        m1[i] = b1[i];
    }
    for(int i=0;i<s;i++)
    {
        m2[i] = b1[i];
    }
    for(int i=0;i<s;i++)
    {
        m3[i] = b1[i];
    }
    for(int i=0;i<s;i++)
    {
        m4[i] = b1[i];
    }
    for(int i=0;i<s;i++)
    {
        q1[i] = b1[i];
    }
    for(int i=0;i<s;i++)
    {
        q2[i] = b1[i];
    }
    for(int i=0;i<s;i++)
    {
        q3[i] = b1[i];
    }
    for(int i=0;i<s;i++)
    {
        q4[i] = b1[i];
    }



    switch(choice)
    {
        case 1:
        {
        cout<<"<============= For BUBBLE SORT, Time Complexity is Below ================>"<<endl;
        auto start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        BubbleSort(b1,s);

        auto end1 = chrono::high_resolution_clock::now();
        double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
        time_taken1 *= 1e-9;
        cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
        cout<<" second"<<endl;

        cout<<"<============= For INSERTION SORT, Time Complexity is Below =============>"<<endl;
        start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        insertionSort(i1,s);

        end1 = chrono::high_resolution_clock::now();
        time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
        time_taken1 *= 1e-9;
        cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
        cout<<" second"<<endl;

        break;
        }

        case 2:
        {
        cout<<"<============= For BUBBLE SORT, Time Complexity is Below ================>"<<endl;
        auto start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        BubbleSort(b2,s);

        auto end1 = chrono::high_resolution_clock::now();
        double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
        time_taken1 *= 1e-9;
        cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
        cout<<" second"<<endl;
        cout<<"<============= For SELECTION SORT, Time Complexity is Below =============>"<<endl;
        start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        selectionSort(s1,s);

        end1 = chrono::high_resolution_clock::now();
        time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
        time_taken1 *= 1e-9;
        cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
        cout<<" second"<<endl;

        break;
        }

        case 3:
        {
        cout<<"<============= For BUBBLE SORT, Time Complexity is Below ================>"<<endl;
        auto start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        BubbleSort(b3,s);

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

        break;
        }

        case 4:
        {
        cout<<"<============= For BUBBLE SORT, Time Complexity is Below ================>"<<endl;
        auto start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        BubbleSort(b4,s);

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

        break;
        }

        case 5:
        {
        cout<<"<============= For INSERTION SORT, Time Complexity is Below ================>"<<endl;
        auto start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        insertionSort(i2,s);

        auto end1 = chrono::high_resolution_clock::now();
        double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
        time_taken1 *= 1e-9;
        cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
        cout<<" second"<<endl;
        cout<<"<============= For SELECTION SORT, Time Complexity is Below =============>"<<endl;
        start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        selectionSort(s2,s);

        end1 = chrono::high_resolution_clock::now();
        time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
        time_taken1 *= 1e-9;
        cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
        cout<<" second"<<endl;

        break;
        }

        case 6:
        {
        cout<<"<============= For INSERTION SORT, Time Complexity is Below ================>"<<endl;
        auto start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        insertionSort(i3,s);

        auto end1 = chrono::high_resolution_clock::now();
        double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
        time_taken1 *= 1e-9;
        cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
        cout<<" second"<<endl;
        cout<<"<============= For MERGE SORT, Time Complexity is Below =============>"<<endl;
        start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        MergeSort(m2,0,s-1);

        end1 = chrono::high_resolution_clock::now();
        time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
        time_taken1 *= 1e-9;
        cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
        cout<<" second"<<endl;

        break;
        }

        case 7:
        {
        cout<<"<============= For INSERTION SORT, Time Complexity is Below ================>"<<endl;
        auto start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        insertionSort(i4,s);

        auto end1 = chrono::high_resolution_clock::now();
        double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
        time_taken1 *= 1e-9;
        cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
        cout<<" second"<<endl;
        cout<<"<============= For QUICK SORT, Time Complexity is Below =============>"<<endl;
        start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        QuickSort(q2,0,s-1);

        end1 = chrono::high_resolution_clock::now();
        time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
        time_taken1 *= 1e-9;
        cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
        cout<<" second"<<endl;

        break;
        }

        case 8:
        {
        cout<<"<============= For SELECTION SORT, Time Complexity is Below ================>"<<endl;
        auto start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        selectionSort(s3,s);

        auto end1 = chrono::high_resolution_clock::now();
        double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
        time_taken1 *= 1e-9;
        cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
        cout<<" second"<<endl;
        cout<<"<============= For MERGE SORT, Time Complexity is Below =============>"<<endl;
        start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        MergeSort(m3,0,s-1);

        end1 = chrono::high_resolution_clock::now();
        time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
        time_taken1 *= 1e-9;
        cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
        cout<<" second"<<endl;

        break;
        }

        case 9:
        {
        cout<<"<============= For SELECTION SORT, Time Complexity is Below ================>"<<endl;
        auto start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        selectionSort(s4,s);

        auto end1 = chrono::high_resolution_clock::now();
        double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
        time_taken1 *= 1e-9;
        cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
        cout<<" second"<<endl;
        cout<<"<============= For QUICK SORT, Time Complexity is Below =============>"<<endl;
        start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        QuickSort(q3,0,s-1);

        end1 = chrono::high_resolution_clock::now();
        time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
        time_taken1 *= 1e-9;
        cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
        cout<<" second"<<endl;

        break;
        }

        case 10:
        {
        cout<<"<============= For QUICK SORT, Time Complexity is Below ================>"<<endl;
        auto start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        QuickSort(q4,0,s-1);

        auto end1 = chrono::high_resolution_clock::now();
        double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
        time_taken1 *= 1e-9;
        cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
        cout<<" second"<<endl;
        cout<<"<============= For MERGE SORT, Time Complexity is Below =============>"<<endl;
        start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        MergeSort(m4,0,s-1);

        end1 = chrono::high_resolution_clock::now();
        time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
        time_taken1 *= 1e-9;
        cout<<"Data Size = "<<s<<" and Time taken by program is : "<<fixed<<time_taken1<<setprecision(6);
        cout<<" second"<<endl;

        break;
        }

        default:
        cout<<"Invalid Choice...!"<<endl;
        break;
    }

    return 0;
}
