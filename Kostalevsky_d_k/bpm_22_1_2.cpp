#include<iostream>

int main() {
    int all = 0;
    int num = 0;
    double answ = 0;
    double x = 0;
    double y = 0;
    while (true) {
        std::cin >> x >> y;
        all += 2;
        if (y > 2 - x * x) {
            num += 2;
        }
    }
    answ = 100 / (all / num);
    std::cout << answ << std::endl;
    return 0;
}