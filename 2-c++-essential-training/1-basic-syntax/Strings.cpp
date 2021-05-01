#include <cstdio>

int main()
{
    // char s[] = "String";
    char s[] = {'S', 't', 'r', 'i', 'n', 'g'};

    // printf("s: %s\n", s);

    for (int i = 0; s[i] != 0; i++)
    {
        printf("char: %c\n", s[i]);
    }

    for (char *cp = s; *cp != 0; ++cp)
    {
        printf("char: %c\n", *cp);
    }

    return 0;
}