#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int n;
float a[1000];
float value,value1,value2;
const float eps=1/100000000;
void input(int n)
{
	for(int i=0;i<=n;i++)
	{
		scanf("%f",&a[i]);
	}

}

float f(float x)
{
	value=0;
	for(int i=n;i>=0;i--)
	{
		value +=pow(x,i)*a[n-i];
	}
	return value;
}

int main()
{
	#ifndef DATA
	freopen("input.txt","r",stdin);
	freopen("out.txt","w",stdout);
	#endif
	float a,b;
	scanf("%d",&n);
	input(n);
	scanf("%f%f",&a,&b);
	float x;
	do
	{
		x=(float)((a+b)*1.0/2);
		value1=f(x);
		value2=f(a);
		if(value1*value2<0) b=x;
	    else a=x;
	}
	while((fabs(a-b)>eps)&&(value1!=0));
	printf(" Nghiem la %4.8f \n",x)	;
return 0;
}