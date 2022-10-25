#include <iostream>
#include <cmath>

int main()
{
    const double e = 2.71;
    float D, ln, a, t, y;
    std::cout << "Write ln a t y\n";
    std::cin >> ln >> a >> t >> y;
    std::cout << "ln: " << ln << "\na: " << a << "\nt: " << t << "\ny: " << y << std::endl;
    D = ((7.8 * pow(a, 2) + 3.52 * t) / (ln * (a + 2 * y) + pow(e, y)));
    std::cout << "\nD: " << D << "\n";
    system("pause");
}