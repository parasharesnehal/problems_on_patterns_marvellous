
#include<stdio.h>
void Display(int iRow, int iCol)
{
    int i=0, j=0;
    for(i=1; i<=iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            if(i == j )
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
        }
    }
        printf("\n");
}

    

int main()
{
    int iValue = 0, iValue2 = 0;

    printf("Enter the number of rows : \n");
    scanf("%d", &iValue);
    printf("Enter the number of columns : \n");
    scanf("%d", &iValue2);      

    Display(iValue, iValue2);
}
