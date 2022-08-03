#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {

    
    int cnt = 0;
    for (int i = 0; i < nums.size() - 2; i++) {
        for (int j = i + 1; j < nums.size() - 1; j++) {
            for (int k = j + 1; k < nums.size(); k++) {
                int prime = nums[i] + nums[j] + nums[k];
                bool t = true;
                for (int l = 2; l * l <= prime; l++) {
                    if (prime % l == 0) t = false;
                }
                if (t == true) cnt++;
            }
        }
    }

    return cnt;

}