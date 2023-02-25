#include<iostream>
#include<string>

int main() {
    std::string s;
    int n = 0;
    std::cin >> s >> n;
    bool flag = true;
    for (int i = 0; i < s.size() - 1; i++) {
        if (i + 1 != n && s[i] != 'a' && s[i] != 'o'&& s[i] != 'u' && s[i] != 'i' && s[i] != 'e') {
            if (s[i + 1] != 'a' && s[i + 1] != 'o' && s[i + 1] != 'u' && s[i + 1] != 'i' && s[i + 1] != 'e') {
                flag = false;
            }
        }
    }
    if (flag == true) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}