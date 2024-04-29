#include <stdio.h>
int main()
{
	double x,y;
	scanf("%lf",&x);
	scanf("%lf",&y);
	double a=x*x+y*y;
	double b=(x+y)*(x+y);
	double c=(x-y)*(x-y);
	printf("%lf\n",a);
	printf("%lf\n",b);
	printf("%lf",c);
	return 0;
}
