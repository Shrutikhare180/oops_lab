#include<iostream>
using namespace std;
int main()
{
int n,n1=0;
cout<<"enter a number ";
cin>>n;
while(n!=0)
{
	n=n/10;
	++n1;
}
cout<<"number of digits is "<<n1;
return 0;
}

