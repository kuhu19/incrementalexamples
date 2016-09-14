/* calculate factorial of a number */

#include <stdio.h>
int main()
{
    int num,i,fact;
    printf("Enter a number: ");
    scanf("%d",&num);
    fact=num;
    for(i=1;i<=(num-1);i++){
       fact = fact*i;
    }
    printf("%d",fact);
    return 0;
}
