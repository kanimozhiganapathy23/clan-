#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int n,i,j,m,d;
	gets(a);
	gets(b);
	n=strlen(a);
	m=strlen(a);
	j=n;
	d=n+m;
	for(i=0;i!=d;i++)
	{
		
			a[j]=b[i];
			j++;
	
}
a[j]='\0';
puts(a);
}
