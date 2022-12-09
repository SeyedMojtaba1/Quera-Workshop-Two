#include <stdio.h>

int main()
{
	int n,i=0;
	char x,ch1,ch2;
	
	scanf("%d %c\n",&n,&x);
	while(i++<n)
		{
			scanf("%c %c\n",&ch1,&ch2);
			
			
			if(x==ch1)
				x=ch2;
			else if(x==ch2)
				x=ch1;	
				
		}
	printf("%c",x);	
	return 0;
}
