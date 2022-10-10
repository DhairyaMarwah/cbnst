#include <stdio.h>
int main()
{
    int i, j, k, n;
    float A[20][20], x[20];
    double s, p;

    printf("Enter the number of equations : ");
    scanf("%d", &n);
    printf("\nEnter the co-efficients of the equations :\n\n");
    for (i = 0; i < n; i++)
    {
        for (j=0;j<n;j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%f", &A[i][j]);
        }
        printf("b[%d] = ", i + 1);
        scanf("%f", &A[i][n]);
    }
    for(j=1;j<=n;j++){
        for(i=1;i<=n;i++){
            if(i<j){
                p=A[i][j]/A[j][j];
                for(k=1;k<=n+1;k++){
                    A[i][k]=A[i][k]-p*A[j][k];
                }
            }
        }
    }
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            printf("%f\t",A[i][j]);
        }
    }
    return 0;
}