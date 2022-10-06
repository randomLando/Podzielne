#include <iostream>
using namespace std;

int main() {

    int a, b, k;
    cin >> a >> b >> k;

    int y = a / k;
    int x = b / k;
    if (!(a % k)) {
        x++;
    }

    cout << x - y;
}