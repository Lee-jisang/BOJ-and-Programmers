#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int a = nums.size()/2;
    sort(nums.begin(), nums.end());
	nums.erase(unique(nums.begin(), nums.end()), nums.end());//중복제거
    int b = nums.size();
    if(a>b) return b;        
    else if(a<b) return a;  
    else return a;
}
