#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;
    scanf("%lf%d",&x ,&n);
    if(n<1||x<0)
        printf("Error");
    else{
    double s=1;
    while(n>0){
		s = (pow(x,n)/n)+s;
		n--;
    }
    printf("%.4f",s);
    }
    return 0;
}