#include <iostream>
#include <string>

int main() {
    std::string s;
    int t = 0;
    std::cin >> t;
    while (t--) {
        std::cin >> s;
        int ca = 0;
        int cb = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] and s[i + 1] == 'a') {
                ca++;
            }
            else if (s[i] and s[i + 1] == 'b') {
                cb++;
            }
        }
        if (ca % 3 % 2 == 0 and cb % 3 % 2 == 0) {
            std::cout << "YES" << " ";
        }
        else {
            std::cout << "NO" << " ";
        }
        std::cout << ca << " " << cb << std::endl;
    }
    return 0;
} 