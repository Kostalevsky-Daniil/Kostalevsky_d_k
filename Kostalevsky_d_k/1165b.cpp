#include <iostream>
#include <vector>
#include <queue>

int main() {
    int n = 0, a = 1, c = 1;
    std::cin >> n;
    std::vector<int> v(n); 
    std::queue<int> q;
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        q.push(v[i]);
    }
    q.pop();
    while(a <= q.front() && !q.empty()){
        if(a == q.front()){
            q.pop();
        }
        else if(a <= q.front()){
            q.pop();
            c += 1;
            a += 1;
        }
    }
    std::cout << c;
    return 0;
}