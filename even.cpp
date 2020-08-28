#include <iostream>
using namespace std;
int main() {
  int n, s = 0;
  cout << "even number: ";
  cin >> n;
  while ((n % 2) != 0) {
    s += 1;
    if (s == 3) {
      cout << "begone\n";
      return 0;
    }
    cout << "try again: ";
    cin >> n;
  }
  cout << "thank you\n";
  return 0;
}
