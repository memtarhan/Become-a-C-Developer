#include <cstdio>
#include <cstdint>

int main()
{
    /*

        Integer types:
        -   char -> Holds a character 
        -   short int -> 16 bit
        -   int -> 32 bit
        -   long int -> 32 or 64 bit 
        -   long long int  -> 2X long int 
        * Available in both signed and unsigned 
    */

    // - Integer sizes
    char c = 0;
    short int si = 0; // or short si = 0;
    int i = 0;
    long int li = 0;       // or long li = 0;
    long long int lli = 0; // or long long lli = 0;

    printf("sizeof char -> %zd bits\n", sizeof(c) * 8);
    printf("sizeof short int -> %zd bits\n", sizeof(si) * 8);
    printf("sizeof int -> %zd bits\n", sizeof(i) * 8);
    printf("sizeof long int -> %zd bits\n", sizeof(li) * 8);
    printf("sizeof long long int -> %zd bits\n", sizeof(lli) * 8);

    /*

        Prints out: 
            sizeof char -> 8 bits
            sizeof short int -> 16 bits
            sizeof int -> 32 bits
            sizeof long int -> 64 bits
            sizeof long long int -> 64 bits             

    */

    // Fixed-size integers
    printf("sizeof int8_t -> %ld bit\n", sizeof(int8_t) * 8);
    printf("sizeof int16_t -> %ld bit\n", sizeof(int16_t) * 8);
    printf("sizeof int32_t -> %ld bit\n", sizeof(int32_t) * 8);
    printf("sizeof int64_t -> %ld bit\n", sizeof(int64_t) * 8);

    printf("\n");

    printf("sizeof uint8_t -> %ld bit\n", sizeof(uint8_t) * 8);
    printf("sizeof uint16_t -> %ld bit\n", sizeof(uint16_t) * 8);
    printf("sizeof uint32_t -> %ld bit\n", sizeof(uint32_t) * 8);
    printf("sizeof uint64_t -> %ld bit\n", sizeof(uint64_t) * 8);

    /*

        Prints out:
            sizeof int8_t -> 8 bit
                sizeof int16_t -> 16 bit
                sizeof int32_t -> 32 bit
                sizeof int64_t -> 64 bit

                sizeof uint8_t -> 8 bit
                sizeof uint16_t -> 16 bit
                sizeof uint32_t -> 32 bit
                sizeof uint64_t -> 64 bit

    */
    return 0;
}