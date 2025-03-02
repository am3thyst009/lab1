#include <iostream>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main() {
    int a = 7, b = 13;

    std::cout << "сложение:" << add(a, b) << std::endl;
    std::cout << "вычитание:" << subtract(a, b) << std::endl;
    std::cout << "умножение:" << multiply(a, b) << std::endl;

    return 0;
}
