//input:5
//output :A B C D E

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = iNo;
    char ch ;
    for(iCnt = 1,ch = 'a'; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);
        
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
