#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i;char ch;
	int flag=1;
	while(1)
	{
	      for(i=0;i<100;i++)
	      {
	      	scanf("%c",&str[i]);
	      	if(flag%2==1)
	      	 {
	      	 	printf("<"); 
	      	
			   }
			   else {
			   		printf(">"); 
			   }
	      	if(str[i]==' ')
	      { flag++;
		  printf("\n");
			continue;}
			else if(str[i]=='}') break;
	      	else{
			 
	      	printf("%c",str[i]);}
	      	
		  }
		  printf("}");
		  break;
	}
}
