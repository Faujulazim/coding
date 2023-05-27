#include<stdio.h>
int main()
{
	char str[100];
	int i;char ch;
	
	while(1)
	{
	      for(i=0;i<100;i++)
	      {
	      	scanf("%c",&str[i]);
	      	if(str[i]=="}")
	      	break;
	      	else
	      	printf("%c",str[i]);
	      	
		  }
		  
	}
}
