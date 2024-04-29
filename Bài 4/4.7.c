#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x;
    scanf("%d%lf",&n ,&x);
    if(n<=0)
        printf("Error");
    else{
    double s2=1;
    while(n>0)
    {
        s2=s2+(pow(-1,n)*pow(x,n));
        n--;
    }
    printf("%f",s2);
    }
    return 0;
}