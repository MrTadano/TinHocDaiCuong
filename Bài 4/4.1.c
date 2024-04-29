#include <stdio.h>
int main() {
    int n;
    scanf("%d%",&n);
    if(n>8||n<0)
        printf("ERROR");
    else
    {
	int sum=1;
	for(int i=1;i<=n;i++)
		sum=sum*i;
    	printf("%d",sum);
    }
    return 0;
}