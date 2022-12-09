#include <stdio.h>

int main()
{
	int loop1,loop2,num1,num2,yes=0;
	scanf("%d %d",&num1,&num2);
	
	for(loop1=num1;loop1<=num2;loop1++)
		{
   if(loop1==1)
    continue;
			if(loop1==2)
				{
					printf("%d\n",loop1);
					continue;
				}
			else if(loop1%2==0)
				continue;
			yes=0;	
			for(loop2=3;loop2<=loop1/2;loop2++)
				{
					if(loop1%loop2==0)
						yes++;	 
				}	
			if(yes==0)	
				printf("%d\n",loop1);
				
		}
}
