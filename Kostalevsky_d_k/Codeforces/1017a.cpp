#include <iostream>

int main() {
    int n = 0;
    int x = 0;
    int answ = 1;
    int num = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            std::cin >> num;
            sum += num;
        }
        if (i == 0) {
            x = sum;
        }
        if (x < sum) {
            answ++;
        }
    }
    std::cout << answ << std::endl;
    return 0;
}