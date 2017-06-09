#include <iostream>

using namespace std;

int factorial(int x) {
  if (x == 1) {
    return 1;
  } else {
    return factorial(x - 1) * x;
  }
}

int main() {
  cout << factorial(10) << endl;
  return 0;
}
