#ifndef UTILLIB_H_INCLUDED
#define UTILLIB_H_INCLUDED
#include <vector>
using namespace std;
bool primeStatus(unsigned long long nr, int k);
unsigned long long getNextPrimeNumber(unsigned long long nr);
unsigned long long getPrevPrimeNumber(unsigned long long nr);
void print_vector(vector <int> const& input)
//void print_array(int *array, int length, int cols);

#endif // VICTOR_UTILS_H_INCLUDED
