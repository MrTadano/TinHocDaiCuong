#include <stdio.h>
#include <math.h>
int gt(int n)
{
    if(n<=1)
        return 1;
    else
        return n*gt(n-1);
}
int main() {
    int n;
    double x;
    scanf("%d%lf",&n ,&x);
    if(n<=0)
        printf("Error");
    else{
    double s1=1;double s2=1;double s3=1;
    while(n>0)
    {
        s1=s1+pow(x,n);
        //s2=s2+(pow(-1,n)*pow(x,n));
        //s3=s3+(pow(x,n) / gt(n));
        n--;
    }
    printf("%f",s1);
    //printf("%f",s2);
    //printf("%f",s3);
    }
    return 0;
}