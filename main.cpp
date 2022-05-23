#include <iostream>

void shifter (int* a, int* b) {
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a = 10;
    int b = 20;
    std::cout << a << " " << b << "\n";
    shifter(&a, &b);
    std::cout << a << " " << b;

    return 0;
}
