#include<stdio.h>
int main(){
    int n, col, row;
    printf("Enter your number: ");
    scanf("%d",&n);
    for ( row = 1; row <=n; row++)
    {
        for ( col = 1; col <=row; col++ )
        {
            printf("%d ",row*col);
        }
        printf("\n");
        
    }
    return 0;
}