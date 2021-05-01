#include <cstdio>

int main()
{
    int x = 7;
    // int y = 42;
    int *ip = &x;
    int &y = x; // y's value is always x's value -> References

    printf("The value of x is: %d\n", x);
    printf("The value of y is: %d\n", y);
    printf("The value of *ip is: %d\n", *ip);
    printf("-----------\n");

    /// - Changes to y affect x and *ip(because it's pointed to x) 
    y = 73;

    printf("The value of x is: %d\n", x);
    printf("The value of y is: %d\n", y);
    printf("The value of *ip is: %d\n", *ip);
    printf("-----------\n");

    // printf("The value of x is: %d\n", x);
    // printf("The value of y is: %d\n", y);
    // printf("The value of *ip is: %d\n", *ip);
    // printf("-----------\n");

    // x = 10;
    // y = 24;

    // printf("The value of x is: %d\n", x);
    // printf("The value of y is: %d\n", y);
    // printf("The value of *ip is: %d\n", *ip);
    // printf("-----------\n");

    // x = 12;
    // y = 20;
    // ip = &y;

    // printf("The value of x is: %d\n", x);
    // printf("The value of y is: %d\n", y);
    // printf("The value of *ip is: %d\n", *ip);
    // printf("-----------\n");

    // /*

    // Prints out:

    //     The value of x is: 7
    //     The value of y is: 42
    //     The value of *ip is: 7
    //     -----------
    //     The value of x is: 10
    //     The value of y is: 24
    //     The value of *ip is: 10
    //     -----------
    //     The value of x is: 12
    //     The value of y is: 20
    //     The value of *ip is: 20

    // */


    // Pointers & References 
    /*

    So, there's a couple of major differences between a pointer and a reference that's worth understanding at this point. 
    First, you don't need to, dereference a reference. So you don't use an asterisk, no special punctuations required. 
    The value of the reference is always the value of the referred variable. 
    Second, there's no syntax for changing a reference. Once the reference is defined, it can't be changed. 
    When I change Y here, I'm not changing Y I'm changing X. Y remains a reference of X. So a reference is not even really a variable.
    */

    return 0;
}