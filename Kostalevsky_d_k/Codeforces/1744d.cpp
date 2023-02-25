#include <iostream>
#include <vector>

int main() {
    int t = 0;
    int n = 0;
    std::cin >> t;
    std::vector<int> v{1000000};
    while (t--) {
        int sum = 0;
        int num = 0;
        int s = 0;
        std::cin >> n;
        for (int i = 1; i <= n; i++) {
            std::cin >> num;
            v[i] = 0;
            while (num % 2 == 0) {
                num = num / 2;
                num++;
            }
            int j = i;
            while (j % 2 == 0) {
                j = j / 2;
                v[i]++;
            }
        }
        sort(v.begin(), v.end());
        for (int i = n; i >= 1 && sum < n; i--) {
            sum += v[i];
            s++;
        }
        if (sum < n) {
            std::cout << -1 << std::endl;
        }
        else {
            std::cout << s << std::endl;
        }
    }
    return 0;
}