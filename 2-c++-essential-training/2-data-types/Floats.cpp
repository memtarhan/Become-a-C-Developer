#include <cstdio>
#include <cstdint>

// a byte is 8 bits
const size_t byte = 8;

int main()
{

    float f;
    double df;
    long double ldf;

    printf("sizeof float -> %zd bits\n", sizeof(f) * byte);
    printf("sizeof double -> %zd bits\n", sizeof(df) * byte);
    printf("sizeof long double -> %zd bits\n", sizeof(ldf) * byte);

    /*

        Prints out:
            sizeof float -> 32 bits
            sizeof double -> 64 bits
            sizeof long double -> 64 bits  

    */

    return 0;
}