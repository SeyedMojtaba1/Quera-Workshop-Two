#include <stdio.h>
#include <math.h>

int main()
{
	int fp2,logn,num;
	scanf("%d",&num);
	
	logn=log2(num);
	logn+=1;
	
	fp2=pow(2,logn);
	printf("%d",fp2);
}
