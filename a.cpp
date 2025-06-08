#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        string s;
        cin >> s;

        int num = stoi(s); 
        int root = (int)sqrt(num);

        bool found = false;

        for (int x = 0; x <= root + 1; ++x) {
            if ((x * x) == num) {
              
                cout << 0 << " " << x << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << endl;
        }
    }

    return 0;
}
