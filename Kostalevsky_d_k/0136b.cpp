#include <iostream>
#include <cmath>
#include <vector>

int main() {
  int a = 0; 
  int c = 0;
  int s = 0; 
  int an = 0; 
  int cn = 0;
  std::cin >> a >> c;
  std::vector <int> A;
  std::vector <int> C;
  std::vector <int> B;
  while (a > 0) {
    A.push_back(a % 3);
    a = a / 3;
  }
  while (c > 0) {
    C.push_back(c % 3);
    c = c / 3;
  }
  if (A.size() < C.size()) {
    an = A.size();
    for (int i = 0; i < C.size() - an; i += 1) {
      A.push_back(0);
    }
  }
  else if (A.size() > C.size()) {
    cn = C.size();
    for (int i = 0; i < A.size() - cn; i += 1) {
      C.push_back(0);
    }
  }
  for (int i = 0; i < A.size(); i += 1) {
    B.push_back((3 + C[i] - A[i]) % 3);
  }
  for (int i = 0; i < B.size(); i += 1) {
    s = s + B[i] * pow(3, i);
  }
  std::cout << s;
  return 0;
}
