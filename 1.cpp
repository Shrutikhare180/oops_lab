#include<iostream>
using namespace std;
int main()
{
int i,j;
cout<<"enter i and j ";
cin>>i>>j;
while(i%j!=0)
{
i++;
}
cout<<"number is "<<i;
return 0;
}

