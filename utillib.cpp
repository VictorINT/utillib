#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

static long long power(unsigned long long x, unsigned long long  y, unsigned long long p)
{
    unsigned long long res = 1;
    x = x % p;

    while (y > 0)
    {

        if (y & 1)
            res = (res * x) % p;


        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}


static bool miillerTest(unsigned long long d, unsigned long long n)
{

    unsigned long long a = 2 + rand() % (n - 4);

    unsigned long long x = power(a, d, n);


    if (x == 1 || x == n - 1)
        return true;


    while (d != n - 1)
    {
        x = (x * x) % n;
       d *= 2;
        //d = d << 1;
        if (x == 1)      return false;
        if (x == n - 1)    return true;
    }


    return false;
}

static bool isPrime(unsigned long long n, int k)
{


    if (n <= 3) return true;
    if (n <= 1 || n == 4)  return false;



    unsigned long long d = n - 1;
    while (d % 2 == 0)
        d /= 2;


    for (int i = 0; i < k; i++)
        if (!miillerTest(d, n))
            return false;

    return true;
}


bool is_prime(unsigned long long nr, int k)
{
    if ((nr & 0x1) && isPrime(nr, k))
        return true;
    else
        return false;
}

unsigned long long get_next_prime_number(unsigned long long nr)
{
    if(is_prime(nr, 20))
        nr++;
    unsigned long long next = 1;
    while(!is_prime(next, 20)){
        if(nr & 1){
            next = nr;
        }  else {
            nr++;
        }
    }
    return next;
}

unsigned long long get_prev_prime_number(unsigned long long nr)
{
    if(is_prime(nr, 20))
        nr++;
    unsigned long long prev;
    while(!is_prime(prev, 20)){

        if((nr & 1) && ((nr-1) > 0)){
            prev = nr;
        }  else {
            nr--;
        }
    }
    return prev;
}

void print_vector(vector<int> const& input){
    copy(input.begin(),
        input.end(),
        ostream_iterator<int>(cout, " "));
}
/*

vector<long long> store_number(string number){
    vector <long long> numbers_stored;
    vector<char> redirect;
    long long t = 0;
    for(int i = 0; i < number.size(); i++){
        if(redirect.size()*10 > 4,294,967,295){
            for(int j = 0; j < redirect.size(); j++){
                t = t*10 + redirect.at(j);
            }
            numbers_stored.push_back(t);
            t = 0;
        } else {
            redirect.push_back(number.at(i));
        }
    }
    return numbers_stored;
}

*/
//not done yet
// void print_array(int *array, int length, int cols)
// {
//     for (int i = 0; i < length; i++) { 
//         printf(); //number of dimensions ??
//     }
// }
