//
// Created by jaden on 26/09/22.
//

#include<iostream>
#include "is_prime_prog.h"

bool isprime(int n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;

    for (int i = 3; i < n; i+=2)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}
