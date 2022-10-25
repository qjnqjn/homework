#include <iostream>
#include <cmath>

int main()
{
    float F, y;
    std::cout << "Write y\n";
    std::cin >> y;
    F = (2 * sin(0.214 * pow(y, 5)+1));
    std::cout << F << "\n";
    system("pause");
}