#include <iostream>
#include <string>

int main() {
    int t = 0;
    std::cin >> t;
    while (t != 0) {
        bool flag = 1;
        std::string s;
        int n = 0, k = 0, c0 = 0, c1 = 0;
        std::cin >> n >> k >> s;
        for (int i = 0; i < n; i++) {
            if (s[i] != '?' && s[i % k] != '?' && s[i] != s[i % k]) {
                flag = 0;
                break;
            }
            if (s[i] != '?') {
                s[i % k] = s[i];
            }
        }
        for (int i = 0; i < k; i++) {
            if (s[i] == '1') {
                c1 += 1;
            }
            if (s[i] == '0') {
                c0 += 1;
            }
        }
        if (flag == 1 && c1 <= k / 2 && c0 <= k / 2) {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
        t -= 1;
    }
    return 0;
}

