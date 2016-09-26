/*
 Program: Coder.c
 Usage: Coder [filename][action]
	where filename = filename for with/coded data
	where action  = D for decode anything sels for coding
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int encode_character(int ch, int val);
int decode_character(int ch, int val);

int main(int argc, char const *argv[])
{
    FILE *fh;	//file handle
    int rv = 1;	//return value
    int ch = 0;	//variable to hold a charater
    // unsigned int ctr = 0;	//counter
    int val = 5;	//value to code with
    char buffer[257];

    if (argc != 3)
    {
        printf("Error: Wrong number of parameters...\n");
        printf("Usage:\n %s filename action", argv[0]);
        printf("\n\n Where:");
        printf("\n filename = name of file to code or decode");
        printf("\n action = D for decpde pr C for encode \n\n");
        rv = -1; //set return error value
    }
    else if (argv[2][0] == 'D'||argv[2][0] == 'd')
    {
        fh = fopen(argv[1], "r"); //open the file

        if (fh <= 0)
        {
            printf("\nError opening file...\n");
            rv = -2;
        }
        else
        {
            ch = getc(fh);	//get a character
            while(!feof(fh))
            {
                ch = decode_character(ch, val);
                putchar(ch);
                ch = getc(fh);
            }

            fclose(fh);
            printf("\n\nFile decode to screen.\n");
        }
    }
    else
    {
        fh = fopen(argv[1], "w");
        if ((fh <= 0))
        {
            printf("\n\nError creating file...");
            return -3;
        }
        else
        {
            printf("\n\nEntere text to be coded.");
            printf("Enter a blank line to end\n");

            while(gets(buffer) != NULL)
            {
                if (buffer[0] == 0)
                    break;

                for (int i = 0; i < strlen(buffer); ++i)
                {
                    ch = encode_character(buffer[i], val);
                    ch = fputc(ch, fh);
                }
                printf("\n\nFile encoded to file.\n");
                fclose(fh);
            }
            
        }
        return (rv);
        
    }
}
int encode_character(int ch, int val) {
    ch = ch + val;
    return (ch);
}

int decode_character(int  ch, int val){
    ch = ch - val;
    return (ch);
}
