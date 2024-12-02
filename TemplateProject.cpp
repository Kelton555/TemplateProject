// Kelton ___
// ________
// December 2, 2024

#include <cmath>
#include <iostream>

using namespace std;

int half(int);
template<class T> T half(T);

int main() {
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << "Half of " << a << ": " << half(a) << endl;
    cout << "Half of " << b << ": " << half(b) << endl;
    cout << "Half of " << c << ": " << half(c) << endl;
    
    return 0;
}

int half(int input) {
    return static_cast<int>(round(input/2.0)); // dividing by 2.0 forces float division
} // i think it's also worth noting separately that, as the denominator is always 2, the number will always end in either .0. or .5, so there could probably be more optimized implementations

template<class T> T half(T input) {
    return input/2.0;
}