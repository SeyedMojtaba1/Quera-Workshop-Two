#include <stdio.h>  
    #include <math.h>  
    int main()
    {  
    long long int  min, max, bmm;
    int loop;
    scanf("%lld %lld", &min, &max);
    if (min > max) {
        long long int x = min;
        min = max;
        max = x;
    }
    
    if (max % min == 0) {
        bmm = min;


    }if (max % min == 0) {
        bmm = min;
    }else if(max%(min/2)==0){


        bmm=min/2;
    }else if(max%(min/3)==0){
        bmm=min/3;
    }else if(max%(min/4)==0){
        bmm=min/4;
    }else if(max%(min/5)==0){


        bmm=min/5;
    }else if(max%(min/6)==0){
        bmm=min/6;
    }else if(max%(min/7)==0){
        bmm=min/7;
    }else if(max%(min/8)==0){
        bmm=min/8;
    }else if(max%(min/9)==0){
        bmm=min/9;
    }else if(max%(min/10)==0){
        bmm=min/10;
    }
    
    else {


        for (loop=1;loop<=min/10;++loop)
        {


            if (min%loop==0 && max%loop==0)
                bmm=loop;
        }
    }
        printf("%lld %lld",bmm, min*max/ bmm);
    }
