#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n<=0) printf("Error");
    else{
    int ns[n]; 
    int i; double a=0; int as=0; double d=0;
    for(i=0;i<n;i++)
    {
        scanf("%d", &ns[i]);
        if(ns[i]<0) {
            a=a+ns[i];
            as++;
        }
        else d=d+ns[i];
    }
    if(as!=0) printf("%lf ", a/as);
    else printf("Mang khong co so am ");
    if(as==n) printf("Mang khong co so duong");
    else printf("%lf",d);
    }
    return 0;
}
