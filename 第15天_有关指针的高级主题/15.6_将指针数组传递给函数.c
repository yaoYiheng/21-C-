/*Passing an array of pointer to a function*/
#include <stdio.h>

void print_strings(char *p[], int n);

int main(int argc, char const *argv[])
{
    char *message[8] = {"Four", "score", "and", "seven",
        "years", "age", "our", "forefathers"};

    print_strings(message, 8);
    return 0;
}

void print_strings(char *p[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%s ",p[i] );
    };
    printf("\n");
}
