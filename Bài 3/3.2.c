#include <stdio.h>
int main()
{
	double x,y;
	double r;
	scanf("%lf",&r);
	if (r<=0)
	{
		printf("ERROR");
	}
	else
	{
	printf("%lf\n",pi*2*r);
	printf("%lf",pi*r*r);
	}
	return 0;
}
