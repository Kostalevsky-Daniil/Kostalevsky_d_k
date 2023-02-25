#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::string s;
            std::string s1;
            std::cin >> s;
            s1 += s;
        }
        int k = 0;
        std::cin >> k;
        for (int i = 0; i < k; i++) {
            std::string s2;
            std::string s3;
            std::cin >> s2;
            s3 += s2;
        }
    }
    return 0;
}