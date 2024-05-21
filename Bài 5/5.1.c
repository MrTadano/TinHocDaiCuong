#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n<=0) printf("Error");
    else{
    int ns[n]; 
    int i; int j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d", &ns[i]);
        j=j+ns[i];
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d ", ns[i]);   
    }
    printf("\n%d", j);
    }
    return 0;
}
