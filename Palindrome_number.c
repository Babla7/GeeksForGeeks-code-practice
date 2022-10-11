
#include <stdio.h>
#include <stdlib.h>

int ispalindrome (int num)
{
    int reversed = 0;
    int originalnumber = num;
    while(num!=0){
        reversed = reversed*10 + num%10;
        num = num / 10;
    }
    printf("the reversed number is %d\n", reversed);
    if(originalnumber == reversed){
        return 1;
    }
    else{
        return 0;
    }
        
    
}


int main()
{
    int number;
    printf ("enter the number: \n");
    scanf ("%d", &number);
    if(ispalindrome(number)){
        printf("palindrome\n");
    }
    else
    {
        printf("not palindrome\n");
    }

    return 0;
}
