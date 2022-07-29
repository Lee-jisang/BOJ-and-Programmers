#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a = { 0,1,2,3,4,5,6,7,8,9 };

int solution(vector<int> numbers) {
    for (int i = 0; i < numbers.size(); i++) {
        auto it = find(a.begin(), a.end(), numbers[i]);
        if (it != a.end()) {
            a.erase(a.begin() + (it - a.begin()));
        }
    }

    int answer = 0;
    for (int i = 0; i < a.size(); i++) {
        answer += a[i];
    }

    return answer;
}


#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {

    int answer = 45;

    for (int i = 0 ; i < numbers.size() ; i++)
        answer -= numbers[i];

    return answer;
}
