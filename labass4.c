#include <stdio.h>
int main(int argc, char const *argv[])
{
    int matrix1[100][100], matrix2[100][100], sum[100][100], r1, r2, c1, c2;
    printf("Enter the elements of the rows of first matrix \n");
    scanf("%d", &r1);
    printf("Enter the elements of the colums of first matrix\n");
    scanf("%d", &c1);
    printf("Enter the elements of the rows of second matrix \n");
    scanf("%d", &r2);
    printf("Enter the elements of the colums of second matrix\n");
    scanf("%d", &c2);

    if (r1 == r2 && c1 == c2)
    {
        printf("Enter the elements of the first matrix:\n");
        for (int r = 0; r < r1; r++)
        {
            for (int c = 0; c < c1; c++)
            {
                scanf("%d", &matrix1[r][c]);
            }
        }
        printf("Enter the elements of the second matrix:\n");
        for (int r = 0; r < r2; r++)
        {
            for (int c = 0; c < c2; c++)
            {
                scanf("%d", &matrix2[r][c]);
            }
        }
        for (int r = 0; r < r2; r++)
        {
            for (int c = 0; c < c2; c++)
            {
                sum[r][c] = matrix1[r][c] + matrix2[r][c];
            }
        }
        printf("the sum of two matrix =\n");
        for (int r = 0; r < r1; r++)
        {
            for (int c = 0; c < c1; c++)
            {
                printf("%d ", sum[r][c]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("ENTER SAME NUMBERS OF COLOUMS AND ROWS .\n");
    }

    return 0;
}
