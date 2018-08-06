#include<iostream>
using namespace std;
	int factorial(int a1)
	{
		int f=1;
		while(a1!=0)
		{
		f=f*a1;
		a1--;
		}
		return f;
		}

int main()
{
	int n,a;
	cout<<"enter a number";
	cin>>n;
	a=factorial(n);
	cout<<"the factorial is "<<a;
	
}
