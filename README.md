# utllib

A c++ library with usefull functions like `print_vector()` and `is_prime()`

## Getting Started

copy paste the `.cpp` and `.h` files to your project and you're good to go

## Examples of code using utllib

```cpp

#include "utillib.h"
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int nr;
        cin >> nr;
        if(is_prime(nr, 40))
            cout << nr << ' ';
    }
    return 0;
}
```

- The code above takes as input a var `n` and `n` numbers and print only the prime ones. 

```cpp
#include "utillib.h"
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec;
    print_vector(vec);
    return 0;
}
```

- The code above takes as input a vector and prints it

#### NOTE: only works for vectors, not for arrays(yet)

| Function name | Description                    | Parameters                    |
| ------------- | ------------------------------ | ------------------------------ |
| `is_prime()`      | checks if a number is prime or not       | number to be tested, number of iterations |
| `get_next_prime_number()`   | returns the next prime number     | number to be tested |
| `get_prev_prime_number()`   | returns the previous prime number    | number to be tested |
| `print_vector()`   | prints a vector using the format `[a, b, c, d]`     | a vector of any type(from <vector> library |
    
   ```pascal
 IMPORTANT: `the library is not thread safe yet! so you can not use it at its fully potential`
```

## END
