/* User input example */

#include <stdio.h>
#include <conio.h>

int main()
{
    int this_is_a_number;
    
    clrscr();
    printf( "Please enter a number: " ); 
    scanf( "%d",&this_is_a_number); 
    printf( "You entered %d", this_is_a_number );
    getchar();
    return 0;
}
