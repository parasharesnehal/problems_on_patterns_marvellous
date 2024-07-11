//input:5
//output :A 1 * B  2 *  C 3 *  D 4 * E 5 *

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = iNo;
    char ch ;
    for(iCnt = 1,ch = 'A'; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t%d\t*\t",ch,iCnt);
        
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
