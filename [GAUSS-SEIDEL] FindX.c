#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define MAX_LOOP 1000
#define MAX_SIZE 100
#define eps 1.0/1000.0
typedef float Matrix[MAX_SIZE][MAX_SIZE];
typedef float Root[MAX_SIZE];

bool ChangeMatrix(Matrix a,int n,Root x)
{
    int count =1;
    int check =0;
    Root y;
    do
    {
        for(int i = 1 ;i <=n;i++)
        {
            float s = 0;
            for(int j =1;j<=n;j++)
            {
                if(j != i) s+=a[i][j]*x[j];
            }
            y[i] = (a[i][n+1]- s)*1.0/(a[i][i]);
            {
                if(fabs(y[i] - x[i]) >=eps) check =1 ;
            }
             x[i] = y[i];
        }
    }
    while (check && count++ < MAX_LOOP);
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
    for(int i =1 ;i<=n;i++)
        scanf("%f",&x[i]);
    OutputMatrix(a,n);
    if(ChangeMatrix(a,n,x))
    {
        for(int i =1 ;i <= n;i++)
        {
            printf(" Nghiem x%d la :  %2.3f\n",i,x[i]);
        }
    }
    else
        printf(" Can't solve \n");
    return 0;
}