#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter a positive integer: ";
cin >> n;
int sum = 0;
int current_N = 1;
do {
    sum += current_N;
    current_N += 2;
}
while (current_N <= (2 * n - 1));
for (int i = 1; i <= n; i++) {
cout << (2 * i - 1);
if (i < n) {
cout << ",";
}
}
cout << "\nsum = " << sum << endl;
return 0;
}


