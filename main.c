#include <stdio.h>
#include <stdlib.h>

void convert(double num,int n)
{
    if(num==1){n=10;printf("1");}
    if(n<10){
        if(num>1){
            if(n!=0)printf("1");
            convert((num-1)*2,n+1);
        }
        else if(num<1){
            if(n!=0)printf("0");
            convert(num*2,n+1);
        }
    }
}

int main()
{
    double num;
    printf("Enter a number:\n");
    scanf("%lf",&num);
    printf("0.");
    convert(num,0);
}
