#include <bits/stdc++.h>
using namespace std;

template <class... A>
int sum(A... args) {
  int s = 0;
  for (int i : std::initializer_list<int>{args...}) {
    s += i;
  }
  return s;
}

int main() {
  cout << sum(10, 20) << endl;
  cout << sum(10, 20, 30) << endl;
  return 0;
}
