#ifndef PRIME_H_INCLUDED
#define PRIME_H_INCLUDED

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
#include <iterator>
#include <sstream>

using namespace std;

bool is_prime(unsigned long long nr, int k);
unsigned long long get_next_prime_number(unsigned long long nr);
unsigned long long get_prev_prime_number(unsigned long long nr);


#endif
