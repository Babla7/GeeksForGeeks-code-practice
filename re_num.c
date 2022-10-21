/*Write a function to reverse a number*/
#include <stdio.h>

void reverse(int num){
    int reverse = 0, rem;
    while(num){
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    printf("reversed number is %d", reverse);
}


int main()
{
    int num;
    printf ( "enter the number\n" );
    scanf ("%d",&num);
    reverse(num); //function call
    return 0;
}
