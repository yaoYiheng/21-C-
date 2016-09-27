/*
 Demostrates the continue statement.
 */
# include <stdio.h>
int main(int argc, char const *argv[])
{
    /*
     Declare a buffer for input and a counter variable
     */
    char buffer [81];

    //Input a line of text.
    puts("Enter a line of text:");
    gets(buffer);

    //Go through the string, displaying onle those
    //characters that are not lowercase vowels

    for (int i = 0; buffer[i] != '\0'; ++i)
    {
        //If the character is a lowercase vowel, loop back
        //Without displaying it.

        if (buffer[i] == 'a'||buffer[i] == 'i'||buffer[i] == 'e'||
            buffer[i] == 'o'||buffer[i] == 'u')
            
            continue;
        //If not a vowel display it.
        putchar(buffer[i]);
        
    }
    
    
    return 0;
}