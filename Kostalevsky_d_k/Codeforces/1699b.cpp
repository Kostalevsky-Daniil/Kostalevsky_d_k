#include <iostream>

int main() {
    int t = 0;
    std::cin >> t;
    while(t--) {
        int n = 0;
        int m = 0;
        int a = 0;
        std::cin >> n >> m;
        for (int x = 1; x <= n; x++) {
            for(int y = 1; y <= m; y++) {
                std::cout << ((x % 4 <= 1) != (y % 4 <= 1)) << " ";
            }
            std::cout << std::endl;
        }
    }
    return 0;
}