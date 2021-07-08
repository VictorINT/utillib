#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED

#include <vector>
#include <algorithm>
#include <iterator>
#include <sstream>

template<typename T> void print_vector(vector <T> const & input);
template<typename T> void print_array(T *arrptr, size_t size);

#endif