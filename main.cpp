#include <iostream>
#include <cmath>

class Power
{
public:
    int a;
    int b;

    void calculate()
    {
        std::cout << a << "^" << b << " = " << pow(a, b);
    }

    void Set()
    {
        std::cout << "Input a: ";
        std::cin >> a;
        std::cout << "Input b: ";
        std::cin >> b;
    }
};

int main()
{
    Power first {2, 3};
    first.Set();
    first.calculate();
    return 0;
}
