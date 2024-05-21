#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
    const int *A = a, *B = b;
    return (*A > *B) - (*A < *B);
}

int main() {
    int n;
    scanf("%d", &n);
    if(n==1) printf("0");
    else{
    int ns[n]; int i; int m=0;
    for(i=0;i<n;i++)
    {
        int t;
        scanf("%d", &ns[i]);
        if(i>0) t=ns[i]+ns[i-1];
        if(t>m) m=t;
    }
       if(m>0) printf("%d", m);
       else printf("0");
    }
    return 0;
}
