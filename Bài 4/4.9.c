#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;
    scanf("%lf%d",&x ,&n);
    if(n<1||x<0)
        printf("Error");
    else{
    double s=0;
    for (int i = 1; i <= n; i++)
		s = sqrt(x + s);
    printf("%.4f",s);
    }
    return 0;
}