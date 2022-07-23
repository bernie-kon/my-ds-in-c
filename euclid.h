#include "common.h"
#include <stdio.h>

int get_gcd(int u, int v) {
    /*
        gcd(u, v) = gcd(u-v, v)     ... (1)
        gcd(u, v) = gcd(v, u)       ... (2)
        gcd(u, 0) = u               ... (3)
    */
    int tmp = 0;

    while(u) {
        if(u < v)
            SWAP(u, v);
        
        u = u - v;
    }

    return v;
}

int get_gcd_mod(int u, int v) {
    //  gcd(u, v) = gcd(u%v, v)  ... (4)
    int tmp = 0;

    while(v) {
        tmp = u % v;
        u = v;
        v = tmp;
    }

    return u;
}

int get_gcd_recursion(int u, int v) {
    if(v == 0)
        return u;
    else
        return get_gcd_recursion(v, u % v);
}

