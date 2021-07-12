#include "print.h"

template<typename T>
void print_vector(vector <T> const & input) {
  copy(input.begin(),
    input.end(),
    ostream_iterator <T> (cout, " "));
}

template<typename T>
void print_array(T *arrptr, size_t size){
    for(int i = 0; i < size; i++){
      printf("%d", *arrptr);
      printf(" ");
      arrptr++;
    }
}
