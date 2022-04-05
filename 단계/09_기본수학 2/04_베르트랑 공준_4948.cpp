
//시간 초과 풀이
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; //1 ≤ n ≤ 123,456
    int cnt;
    int cnt2;
    
    while (1) {
        cin >> n;
        if (n == 0)
            return 0;

        cnt2 = 0;
        for (int i = n+1; i <= 2 * n; i++) {
            cnt = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0)
                    cnt++;
            }
            if (cnt == 2)
                cnt2++;
        }

        
        cout << cnt2 << "\n";

    }
}
