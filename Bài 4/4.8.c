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
    double s3=1;
    while(n>0)
    {
        s3=s3+(pow(x,n) / gt(n));
        n--;
    }
    printf("%f",s3);
    }
    return 0;
}