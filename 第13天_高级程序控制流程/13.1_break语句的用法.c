/*
Demonstrates the break statement.
 */
# include <stdio.h>

char s[] = "This is a test string. It contains two sentences";

int main(int argc, char const *argv[])
{
	printf("Oringinal string :%s\n",s );

	for (int i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == '.')
		{
			s[i + 1] = '\0';
			break;
		}
	}

	printf("Mpdified string :%s\n", s);

	return 0;
}