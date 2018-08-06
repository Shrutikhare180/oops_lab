#include<stdio.h>
#include<string.h>
void strend(char s[50], char t[50])
{
	int i,k,p=(strlen(t)-1);
	for(i=(strlen(s)-1);i>=(strlen(s)-strlen(t));i--)
	{
		if(s[i]!=t[p])
		{
			k=5;
			printf("zero");
			break;
		}
		else 
		{
			k=1;
		}
		p--;
	}	
	if(k==1){
	printf("1");}
}
int main()
{
	printf("enter two strings s and t");
	char s1[50],t1[50];
	scanf("%s",&s1);
	scanf("%s",&t1);
	strend(s1,t1);
	
	return 0;
}
