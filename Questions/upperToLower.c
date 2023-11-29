#include<stdio.h>

void main()
{
    int letter ; //For getting ascii values
    
    
    for(; ;){

        printf("Enter any letter:");
        letter = getchar(); //Taking input character from user

if(letter == EOF){
    break;
}
if(letter>='a' && letter<='z'){  //Range of ASCII values for lower case letter.
    letter-=32;     //If you see the ascii values then the difference between lower and upper case is 32.
    putchar(letter);
 }
    }
}