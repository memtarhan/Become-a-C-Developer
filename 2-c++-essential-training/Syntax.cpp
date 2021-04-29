#include <cstdio>

// int main()
// {
//     puts("Loop test");
//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d: %s\n", i, "Loop");
//     }

//     return 0;
// }

int main(int argc, char **argv)
{
    puts("Loop test");
    for (int i = 0; argv[i]; i++)
    {
        printf("%d: %s\n", i, argv[i]);
    }

    return 0;
}