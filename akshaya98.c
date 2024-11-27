#include<stdio.h>
#include<stdlib.h>
void freeMatrix(int** matrix, int rows)
{
	int i, j, k;
    for (i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}
int main()
{ 
    int rows1,columns1,sum;
    printf("Enter rows of matrix 1: ");
    scanf("%d",&rows1);
    printf("Enter columns of matrix 1: ");
    scanf("%d",&columns1);
    
    int rows2, columns2;
    printf("Enter rows of matrix 2: ");
    scanf("%d",&rows2);
    printf("Enter columns of matrix 2: ");
    scanf("%d",&columns2);

    if(columns1 != rows2)
    {
        printf("Matrix multiplication is not possible");
    }

    else
    {
        int **matrix1 = (int**) malloc(rows1 * sizeof(int));
        {
        	int i;
            for(i =0; i < rows1; i++)
            {
                matrix1[i] = (int *) malloc(columns1 * sizeof(int));
            }
        }
        int **matrix2 = (int **) malloc(rows2 * sizeof(int));
        int i;
        for(i =0; i < rows2; i++)
        {
            matrix2[i] = (int *) malloc(rows1 * sizeof(int));
        }

        printf("\n Enter the input for matrix 1: ");
        for(i =0; i <rows1; i++)
        {
        	int j;
            for(j =0; j < columns1; j++)
            {
                scanf("%d",&matrix1[i][j]);
            }
            
        }
    
        printf("\n Enter the input for matrix 2: ");
        for(i =0; i <rows2; i++)
        {
        	int j;
            for(j =0; j < columns2; j++)
            {
                scanf("%d",&matrix2[i][j]);
            }
            
        }

       int **result = (int **) malloc(rows1 * sizeof(int));
       for(i =0; i < columns2; i++)
       {
        result[i] = (int *) malloc(columns2 * sizeof(int));
       }

    for(i =0; i <rows1; i++)
    {
    	int j;
        for(j =0; j <columns2; j++)
        {            
		    sum =0;
		    int k;
            for(k =0; k < rows2; k++)
            {
                sum = sum + matrix1[i][k]*matrix2[k][j];
            }
            result[i][j] = sum;

        }
    }

    for(i =0; i < rows1; i++)
    {
    	int j;
        for(j =0; j < columns2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    freeMatrix(result,rows1);
    freeMatrix(matrix1,rows1);
    freeMatrix(matrix2,rows2);
    return 0;    
    }
}
