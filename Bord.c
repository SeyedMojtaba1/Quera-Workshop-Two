#include <stdio.h>
#include <math.h>
int main()
{
	double jdel,R,R2,t1,t2,delta,vx,vy,y0,h,x;
	scanf("%lf %lf %lf %lf\n",&vx,&vy,&y0,&h);
	
	x=y0-h;
	delta=(vy*vy)+(20*x);
	
	if(delta<0)
		puts("impossible");
	else if(delta==0)
		{
			t1=vy/(10);
			
			if(t1>0)
				{
					R=vx*t1;
					printf("%0.2lf",R);
				}
			else
				puts("impossible");	
		}	
	else
		{
			jdel=sqrt(delta);
			t1=(-vy+jdel)/(-10);
			if(t1>0)
					R=(vx)*t1;
			else
				R=0;	
			t2=(vy+jdel)/(10);
			
			if(t2>0)
					R2=(vx)*t2;
			else 
				R2=0;	
				if(R!=0&&R2!=0&&R>=R2)
					printf("%0.2lf\n%0.2lf",R2,R);
				else if(R!=0&&R2!=0&&R<R2)
					printf("%0.2lf\n%0.2lf",R,R2);
				else if(R==0&&R2!=0)
					printf("%0.2lf",R2);
				else if(R2==0&&R!=0)
					printf("%0.2lf",R);	
				else
					puts("impossible");			
		}
}
