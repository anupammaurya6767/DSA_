void symmetry(int n) {
  // Write your code here.
  for (int i = 1; i <= 2 * n; i++) {
    if (i <= n) {
      for (int j = 1; j <= 2 * n; j++) {
        if (j <= (n - i + 1) || j > n + i - 1) { //(2n-(n-i+1))
          cout << "* ";
        } else {
          cout << " ";
        }
      }
      cout << endl;
    } else {
      for (int j = 1; j <= 2 * n; j++) {
        if (j <= (i - n) || j > (3 * n - i)) { // 3* - i = 2n-(i-n)
          cout << "* ";
        } else {
          cout << " ";
        }
      }
      cout << endl;
    }
  }
}
