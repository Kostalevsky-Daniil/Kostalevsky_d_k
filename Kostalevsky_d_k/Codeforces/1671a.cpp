#include <iostream>
#include <string>

int main() {
    std::string s;
    int t = 0;
    bool Flag = true;
    std::cin >> t;
    while (t--) {
        std::cin >> s;
        int ca = 0;
        int cb = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i + 1] != s[i] and s[i - 1] != s[i]) {
                Flag = false;
                break;
            }
            else {
                Flag = true;
            }
        }
        if (Flag == true) {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
} 