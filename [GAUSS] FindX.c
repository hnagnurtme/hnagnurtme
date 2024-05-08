#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 100
typedef float Matrix[MAX_SIZE][MAX_SIZE];
typedef float Root[MAX_SIZE];


void Doidong(Matrix a,int n ,int row1,int row2 )
{
	if(row1 < 1 ||row2 < 1 ||row1 > n+1 || row2 > n+1)
	{
		printf(" Error \n ");
		exit(1);
	}
	for(int i = 1; i <= n+1 ;i++)
	{

		float temp = a[row1][i]  ;
		a[row1][i] = a[row2][i] ;
		a[row2][i] = temp ;
	}
}


bool Gauss(Matrix a,int n)
{
	for(int i = 1; i <=n; i++)
	{
		if(a[i][i] == 0)
		{
			for(int j = i+1 ;j <=n;j++)
			{
				if(a[j][i]!= 0)
				{
					
					if( j<=n )
						{
							Doidong(a,n,i,j);
							break;
						}
					else return false;
				}
			}
			
		}
		for(int j= i+1; j <= n ;j++)
		{
			float m = -1.0*a[j][i]/a[i][i];
			for(int k = i ;k <= n+1 ;k++)
			{ 
				a[j][k] += a[i][k]*m ;
			}
		}
	}
	return true;
}

bool Findx(Matrix a ,int n ,Root x)
{
	if(!Gauss(a,n))
	{
		printf(" Can't solve by Gauss \n");
		return false ;
	}
	for(int i = n ;i >=1;i--)
	{
		float s = 0;
		for(int k = n ;k > i;k--)
			s += a[i][k]*x[k];
		x[i] = (a[i][n+1]- s)/ a[i][i];
	}
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