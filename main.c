#include "euclid.h"
#include "timer.h"

int main(int argc, char** argv)
{
    int a, b;
        
    while(1)
    {
    printf("input two integers to get the gcd of them->");
    scanf("%d %d", &a, &b);
    
    if(a == 0 || b == 0) 
        break; // the program will be terminated.
    else if(a < 0 || b < 0)
        continue;

    int gcd = get_gcd(a, b);
    int gcd2 = get_gcd_mod(a, b);
    int gcd3 = get_gcd_recursion(a, b);

    printf("the gcd of two integers is: %d %d %d\n", gcd, gcd2, gcd3);
    }

    return 0;
}