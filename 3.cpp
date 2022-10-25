#include <iostream>
#include <cmath>

int main()
{
    const double e = 2.71;
    float U, ln, k, y;
    std::cout << "Write ln k y\n";
    std::cin >> ln >> k >> y;
    std::cout << "ln: " << ln << "\nk: " << k << "\ny: " << y << std::endl;
    U = ((ln * (k-y) + pow(y, 4)) / (pow(e, y) + 2.355 * pow(k, 2)));
    std::cout << "\nU: " << U << "\n";
    system("pause");
}