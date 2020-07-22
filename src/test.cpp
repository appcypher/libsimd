#include <iostream>
#include <immintrin.h>
using namespace std;

int main() {
    cout << "Hello world!" << endl;
    cout << "sizeof(__m256i) = " << sizeof(__m256i) << endl;
    cout << "sizeof(__m256d) = " << sizeof(__m256d) << endl;

    __m256i a = {1, 2, 3, 4};
    __m256i b = {4, 5, 6, 7};

    __m256i c = _mm256_add_epi32(a, b);
}
