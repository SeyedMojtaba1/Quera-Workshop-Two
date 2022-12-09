#include <stdio.h>

int main()
{
int multi=1,n,i=1;
scanf("%d",&n);

while(i<=n)
{
	multi*=i;
	i++;
}
printf("%d",multi);
}
