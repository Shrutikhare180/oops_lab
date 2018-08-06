#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter size of array";
	cin>>n;
	int j,i,A[n],c=0,min;
	cout<<"enter elements of the array";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for(i=0;i<=n-2;i++)
	{	
		min=i;
		for(j=i+1;j<=n-1;j++)
		{
			if(A[min]>A[j])
			{	
				min=j;
				c=A[min];
				A[min]=A[i];
				A[i]=c;
			}
		}
}
	int k,l;
	cout<<"enter the value of k";
	cin>>k;
	cout<<"enter 1 for largest and 2 for smallest";
	cin>>l;
	if(l==1)
	{
		cout<<A[k-1];
	}
	else if(l==2)
	{
		cout<<A[n-k];
	}
	else
		cout<<"invalid choice";
}
