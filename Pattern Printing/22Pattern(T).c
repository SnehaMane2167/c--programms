#include <stdio.h>
#include <conio.h>

int main()
{

    int i=0,j=0,c=0;

    printf("\n Enter Column Values for T Pattern:");
    scanf("%d",&c);

    printf("\n ========================Pattern=======================\n\n");

    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==1||j==(c+1)/2)
            {
              printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }

        printf("\n");
    }

    printf("\n=======================================================\n");

    getch();
    return 0;
}
