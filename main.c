#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int i,j;
    int rows = 5;


    for (i = 1; i<=5; i++)
    {
        for (int j = i; j<rows; j++)
        {
            printf(" ");
        }
        for (j=1; j<=i; j++)
        {
            printf(" *");
        }
        printf("\n");
        
    }
    
    
    for (i = 4; i>=1; i--)
    {
        for (int j = i; j<rows; j++)
        {
            printf(" ");
        }
        for (j=1; j<=i; j++) //4 3 2 1
        {
            printf(" *");
        }
        printf("\n");
    }

return EXIT_SUCCESS;


}
