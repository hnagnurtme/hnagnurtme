#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 100
typedef float Matrix[MAX_SIZE][MAX_SIZE]  ;
typedef float Root[MAX_SIZE] ;


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

void CoppyMatrix(Matrix a,int n,Matrix b)
{
	for(int i =1 ;i<=n;i++)
	{
		for(int j =1;j <=n+1;j++)
			b[i][j] = a[i][j];
	}																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																														
}

float DetMatrix(Matrix temp,int n)
{
	Matrix a ;
	CoppyMatrix(temp,n,a);
	int count =0;
	for(int i=1; i<=n-1;i++)
	{
		if(a[i][i]==0)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(a[j][i]!=0)
				{
					Doidong(a,n,i,j);																			
					count ++;
					break;
				}
			return 0;
			}	
		}
		for(int j=i+1;j<=n;j++)
		{
			float m =-1.0*a[j][i]/a[i][i];
			for(int k=i;k<=n+1;k++)
			{
				a[j][k]+=a[i][k]*m;
			}
		}
	}
	float result =1;
	for(int i =1 ;i<=n;i++)
	{
		result *= a[i][i];
	}
	return (count %2 == 0)? result : -result ;
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

bool Findx(Matrix temp, int n, Root x) 
{
    Matrix a;
    CoppyMatrix(temp, n, a);
    int Det = 0; 
    Det = DetMatrix(a, n);
    if (Det == 0) {
        printf(" Can't solve \n");
        return false;
    } else {
        for (int i = 1; i <= n; i++) {
            Matrix b; 
            CoppyMatrix(a, n, b);
            for (int j = 1; j <= n; j++) {
                b[j][i] = temp[j][n+1]; 
            }
            x[i] = DetMatrix(b, n) / Det; 
        }
    }
    return true;
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
	float result = DetMatrix(a,n);
	printf(" %8.2f\n",result);
	if(Findx(a,n,x))
	{
		for(int i =1 ;i <= n;i++)
		{
			printf(" Nghiem x%d la :  %2f\n",i,x[i]);
		}
	}
	return 0;
}