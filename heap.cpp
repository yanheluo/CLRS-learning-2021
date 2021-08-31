#include<iostream>
using namespace std;
int left(int i)
{
	return 2*i+1;
}

int right(int i)
{
	return 2*i+2;
}

void maxheapify(int A[],int n,int i)
{
	int l=left(i);
	int r=right(i);
	int largest=i;
	if(l<n&&A[l]>A[largest])
		largest=l;
	if(r<n&&A[r]>A[largest])
		largest=r;
	if(largest!=i)
		{
		swap(A[largest],A[i]);
		maxheapify(A,n,largest);
}}

void buildheap(int A[],int n)
{
for(int i = n/2-1;i >= 0;i--)
        maxheapify(A, n, i);
}

void print(int A[], int n)
{
        for(int i = 0;i < n;i++)
            cout << A[i] << " ";
        cout << endl;

}

void heap_sort(int A[],int n)
{
	buildheap(A,n);
	for(int i=n-1;i>=0;i--)
	{
		swap(A[0],A[i]);
		maxheapify(A, --n, 0);
	}
}

int main()
{
    int A[10] = {10,9,8,17,6,51,4,3,2,1};
    heap_sort(A,10);
    print(A, 10);
    return 0;
}

