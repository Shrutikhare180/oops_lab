#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,j,r,r1;
	int A[4]={0};
	for(i=1000;i<=9999;i++)
	{
		j=3;
		int a1=i;
		while(a1!=0)
		{
			r1=a1%10;
			A[j]=r1;
			a1=a1/10;
			j--;
		}
		if(A[0]==A[1]&&A[2]==A[3])
		r=sqrt(i);
		if((r*r)==i)
		cout<<i<<endl;		
		}
	return 0;
}
