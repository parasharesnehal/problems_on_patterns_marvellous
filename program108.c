/*
1
1 2
1 2 3   
1 2 3 4
*/

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    int iCnt1 = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        for(iCnt1 = 1; iCnt1 <= iCnt; iCnt1++)
        {
            printf("%d\t",iCnt1);
        }
        printf("\n");
    }
}       
int main()
{
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}