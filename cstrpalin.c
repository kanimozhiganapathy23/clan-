#include<stdio.h>
int main()
{
   char str[100],temp,name[100];
   int i,len;
   
   printf("Enter String : ");
   scanf("%s",str);
   strcpy(name,str);
   puts(name);
   
   
   len=strlen(str)-1;
   
   for(i=0;i<strlen(str);i++)
   {
      temp=str[i];
      str[i]=str[len];
      str[len--]=temp;
   }
   printf("\nReverse string :%s",str);
  if(strcmp(name,str)==0)
  {
  	printf("palindrome");
  }
  else
  printf("nooo");
  
   
}
