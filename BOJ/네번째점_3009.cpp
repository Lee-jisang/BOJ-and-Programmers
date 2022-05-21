//세 점이 주어졌을 때 특징은 x 좌표, y 좌표마다 2개는 같고 나머지 하나가 남는다는 것입니다.
#include <iostream>
using namespace std;

int main() {
    int x[3];
    int y[3];

    for (int i = 0; i < 3; i++)
        cin >> x[i] >> y[i];


    if (x[0] == x[1])
        cout << x[2];
    else if (x[0] == x[2])
        cout << x[1];
    else
        cout << x[0];

    cout << " ";

    if (y[0] == y[1])
        cout << y[2];
    else if (y[0] == y[2])
        cout << y[1];
    else
        cout << y[0];
}
