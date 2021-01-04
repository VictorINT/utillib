#ifndef UTILLIB_H_INCLUDED
#define UTILLIB_H_INCLUDED

#include "utillib.cpp"

using namespace std;

bool is_prime(unsigned long long nr, int k);
unsigned long long get_next_prime_number(unsigned long long nr);
unsigned long long get_prev_prime_number(unsigned long long nr);
void print_vector(vector<int> const& input);
//void print_array(int *array, int length, int cols);
//vector<long long> store_number(string number);

#endif // VICTOR_UTILS_H_INCLUDED
