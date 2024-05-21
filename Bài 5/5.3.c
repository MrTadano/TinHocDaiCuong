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
    int ns[n]; 
    int i; 
    for(i=0;i<n;i++)
    {
        scanf("%d", &ns[i]);
    }
    qsort(ns,n,sizeof(int),cmp);
    for(i=0;i<n;i++)
    {
        printf("%d ", ns[i]);
    }
    return 0;
}
