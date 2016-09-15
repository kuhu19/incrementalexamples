/*prints a message if number is positive*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int number;
    clrscr();
    
    printf("Enter number: ");
    scanf("%d",&number);
    
    if(number>0){
        printf("Number is positive");
    }
    
    getch();
    return 0;
}
