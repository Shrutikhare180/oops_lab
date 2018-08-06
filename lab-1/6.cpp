#include<stdio.h>
#include<string.h>
void strcat(char s[100], char t[50])
{
	int k=0,i=strlen(s),j=strlen(t);
	while(j!=0)
	{
		s[i++]=t[k];
		++k;
		j--;
	}
	puts(s);
}
int main()
{
	printf("enter two strings s and t");
	char s1[50],t1[50];
	scanf("%s",&s1);
	scanf("%s",&t1);
	strcat(s1,t1);
	
	return 0;
}
