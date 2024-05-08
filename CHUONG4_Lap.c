#include <stdio.h>
#include <math.h>
const int MAX_count=1000;
const float eps=1/10000;


float f(float x)
{
	float result;
	result=pow((x+1),1.0/3);
	printf("%4.6f\n",result);
	return result;
}
bool Findx(float g(float),float *ptr)
{
	float x,y;
	scanf("%f",&x);
	int cnt=0;
	do
		{
			y=x;
			x=g(y);
			if(fabs(x-y)<=eps) 
			{
				*ptr=x;
				return true;
			}
			cnt++;
		}
	while( cnt<=MAX_count);
	return false;
}


int main()
{
	float result;
	bool check=Findx(f,&result);
	if(check==true)
	{
		printf(" Nghiem la %4.6f ",result);
		return 0;
	}
	printf(" Khong chua nghiem");
	return 0;
}