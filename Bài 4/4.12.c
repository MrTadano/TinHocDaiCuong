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
    double x;
    int n;
    scanf("%lf%d",&x ,&n);
    if(n<1||x<0)
        printf("Error");
    else{
    double s=1;
    while(n>0){
		s = pow(-1,n)*(pow(x,n)/gt(n))+s;
		n--;
    }
    printf("%.4f",s);
    }
    return 0;
}