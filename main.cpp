#include <string>
#include <vector>

void greatest_divisor() {
    int a = 48, b = 18;
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    (void)a;
}

void sum_odds() {
    int acc = 0;
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 != 0) acc += i;
    }
    (void)acc;
}

void product_range() {
    int acc = 1;
    for (int i = 1; i <= 5; ++i) acc *= i;
    (void)acc;
}

void leading_zeros() {
    unsigned int n = 0b000101u;
    int zeros = 0;
    while ((n & 1u) == 0u) { zeros += 1; n >>= 1; }
    (void)zeros;
}

extern "C" int lunar_ripple();
extern "C" void ivory_compass();
extern "C" void hidden_spruce();
extern "C" void bright_spruce();
extern "C" void subtle_thorn();

int main() {
    greatest_divisor();
    sum_odds();
    product_range();
    leading_zeros();
    ivory_compass();
    hidden_spruce();
    bright_spruce();
    subtle_thorn();
    return lunar_ripple();
}
