//input:5
//output :5 * 4 * 3 * 2 * 1 * 0 *

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = iNo;
    
    for(iCnt = iNo; iCnt >=0 ; iCnt--)
    {
        printf("%d\t*\t",iCnt);
        
    }
    printf("\n");
}
    

int main()
{
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d", &iValue);

    Display(iValue);
}
