#include<iostream>
#include<cmath>

int main() {
    double lhs = 0.1;
    double rhs = 1;
    double eps = 0.0001;
    double dx = 0.05;
    std::cout << 'x' << "  " << "Summary" << std::endl;
    for (double x = lhs; x <= rhs; x += dx) {
        int i = 1;
        double temp = 1;
        double sum = 0;
        while (std::abs(temp) >= eps) {
            temp = std::pow(-1, i + 1 ) * (std::pow(x, 2 * i + 1)) / (4 * std::pow(i, 2) - 1);
            sum += temp;
            i++;
        }
        std::cout << x << " " << sum << std::endl;
    }
    return 0;
}