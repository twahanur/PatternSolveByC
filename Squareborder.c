#include<stdio.h>
int main(){
    int n, col , row;
    printf("Please input any number: ");
    scanf("%d", &n);
    for ( row = 1; row <=n; row++)
    {
        for ( col = 1; col <=n; col++)
        {
            if (row == 1 || row == n || col == 1 || col == n)
            {
                printf("%c", row+64);
            }
            else
            printf(" ");
            
        }
        printf("\n");
        
    }
    
}