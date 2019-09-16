#include<stdio.h>
#include<stdlib.h>
void print(int **b,int r,int c)
{
        int i,j;
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                        {
                                printf("%d\n",b[i][j]);
                        }
        }
}

void main()
{	int r,i,c,j,sum=0;
	printf(" enter the number of row and coloum\n");
	scanf("%d%d",&r,&c);
	int **a =(int **)malloc(r*sizeof(int *));
	       for(i=0;i<r;i++)
	       {
		  a[i]=(int *)malloc(c*sizeof(int));
		}
	printf(" enter the elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			sum=sum+a[i][j];
		}
	}
	printf(" sum of all the elements is %d",sum);
	print(a,r,c);
}

