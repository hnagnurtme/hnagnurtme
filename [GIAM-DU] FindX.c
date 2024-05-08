#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define MAX_LOOP 1000
#define MAX_SIZE 100
#define eps 1.0/1000.0
typedef float Matrix[MAX_SIZE][MAX_SIZE];
typedef float Root[MAX_SIZE];
typedef float Mod[MAX_SIZE];
bool Findx(Matrix a,int n,Root x)
{
	for(int i =1; i<=n ;i++)
		{
			float res =a[i][i];
			for(int j = 1 ;j <=n+1 ;j++)
			{
				a[i][j] = a[i][j]/res;
			}
		}
	//
		Mod r;
		for(int i =1 ;i<=n;i++)
		{
			r[i] =a[i][n+1];
			for(int j=1;j<= n;j++)
			{
				r[i] -=a[i][j]*x[j];
			}
		}
		int count =0 ;
		int check = 0;
		do
		{
		//
			float max =fabs(r[1]);
			int k =1;
			for(int i =2 ;i <= n;i++)
			{
				if( max< fabs(r[i]))
				{
					max =fabs(r[i]);
					k = i;
				}
			}
			x[k] +=r[k];
		//
			float d =r[k];
			for(int i =1 ;i <=n;i++)
			{
				r[i] -=a[i][k]*d;
				if(fabs(r[i]) >= eps) check =1;
			}
		}
		while(check && count ++ <MAX_LOOP);
	if(check == 0 ) return false;
    return true;
}

int InputMatrix(Matrix a)
{
	int n;
	scanf("%d",&n);
	for(int i = 1;i <=n ;i++)
		for(int j =1 ;j <=n+1 ;j++)
			scanf("%f",&a[i][j]);

	return n;
}

void OutputMatrix(Matrix a,int n)
{
	for(int i = 1;i <=n ;i++)
	{
		for(int j =1 ;j <=n+1 ;j++)
			printf("%8.2f",a[i][j]);
		printf("\n");
	}
	printf("\n");		
}

int main(int argc, char const *argv[])
{
	#ifndef DATA
	freopen("NghiemGauss.txt","r",stdin);
	#endif
	Matrix a;
	Root x;
	int n;
	n =InputMatrix(a);
	OutputMatrix(a,n);
	if(Findx(a,n,x))
	{
		for(int i =1 ;i <= n;i++)
		{
			printf(" Nghiem x%d la :  %2f\n",i,x[i]);
		}
	}
	return 0;
}