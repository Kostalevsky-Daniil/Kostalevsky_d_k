#include <iostream>
#include <queue>

int main() {
    int n = 0, c = 0, max = 0;
    long long k = 0;
    std::cin >> n >> k;
    std::queue<int> q;
    for (int i = 0; i < n; i++) {
        int a = 0;
        std::cin >> a;
        if (max < a) {
            max = a;
        }
        q.push(a);
    }
    int front = q.front();
    if (q.size() > 2) {
        std::cout << front;
    }
    else {
        while (c != k) {
        q.pop();
        if (front > q.front()) {
            c += 1;
            q.push(q.front());
        }
        else {
            c = 1;
            q.push(front);
            front = q.front();
            if (front == max) {
                break;
            }
        }
        }
        std::cout << front;
    }
    return 0;
}