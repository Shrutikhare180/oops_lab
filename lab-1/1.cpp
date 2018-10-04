#include<iostream>
using namespace std;
int main()
{
float s,j;
cout<<"enter s and j ";
cin>>s>>j;
while(s%j!=0)
{
s++;
}
cout<<"number is "<<s;
return 0;
}

