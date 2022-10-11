#include <iostream>
#include <vector>

int main() {
    int n = 0;
    int k = 0;
    int min = 999999999;
    std::vector<int> sad;
    std::cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int temp = 0;
        std::cin >> temp;
        sad.push_back(temp);
    }
    for (int i = 0; i < sad.size(); i++) {
        if (k % sad[i] == 0) {
            int temp = k / sad[i];
            if (temp < min) {
                min = temp;
            }
        }
    }
    std::cout << min;
    return 0;
}