/*
 Inputs a list of strings from the keyboard, sorts them
 and then display them on the screen
 */
//书中代码无法编译成功.
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

#define MAXLINE 25

int get_lines(char *lines[]);
void sort(char *p[], int n);
void print_strings(char *p[], int n);

char  *lines[MAXLINE];

int main(int argc, char const *argv[])
{
    int number_of_lines;

    //Read in the lines from the keyboard

    number_of_lines = get_lines(lines);

    if (number_of_lines < 0)
    {
        puts("Memory allocation error");
        exit(-1);
    }

    sort(lines, number_of_lines);
    print_strings(lines, number_of_lines);

    return 0;
}
int get_lines(char *lines[]){

    int n = 0;
    char buffer[80]; //Temporary storage for each line
    printf("Enter one line at time; enter a blank when done.\n");

    while ((n < MAXLINE) && gets(buffer) != 0 && buffer[0] != '\0')
    {
        if((lines[n] = (char *)malloc(strlen(buffer +1)) == NULL))
            return -1;

        strcpy(lines[n++], buffer);
    }
    return n;
}
void sort(char *p[], int n){
    int a, b;
    char *temp;
    for(a = 1; a < n; a++){
        for(b = 0; b < n - 1; b++){
            if (strcmp(p[b], p[b+1]) > 0)
            {
                temp = p[b];
                p[b] = p[b+1];
                p[b+ 1] = temp;
            }
        }
    }
}
void print_strings(char *p[], int n){
    for (int i = 0; i < n; ++i)
    {
        printf("%s", p[i]);
    }
    printf("\n");
}

