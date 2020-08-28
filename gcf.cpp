#include <iostream>
using namespace std;

int gcf(int a, int b) {
  if (a == 0 && b != 0) return b;
  else if (b == 0 && a != 0) return a;
  else {
    int c = b, d = a % b;
    if (d != 0) return gcf(c, d);
    else return c;
  }
}

int main() {
  int a, b;
  cout << "Input two integers:";
  cin >> a >> b;

  if (a > b) cout << gcf(a, b) << endl;
  else cout << gcf(b, a) << endl;

  return 0;
}
