#include<stdio.h>
void name(char a[],int );
int main()
{
 char a[60];
 int len;
 gets(a);
 puts(a);
 len=strlen(a);
 printf("%d ",len);
 name(a,len);
 
}
void name(char a[],int len)
{
	int i,count=0,b=0;
	for(i=0;i<len;i++)
	{
		if(a[i]=='a'|| a[i]=='e'|| a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			count=count+1;
		}
		else
		{
			b=b+1;
		}
	}
printf("%d  ",count);
printf("%d  ",b);
}
