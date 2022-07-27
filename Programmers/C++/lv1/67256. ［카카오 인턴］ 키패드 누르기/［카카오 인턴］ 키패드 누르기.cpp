#include <string>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <map>
using namespace std;

//1 2 3
//4 5 6
//7 8 9
//* 0 # 

//00 01 02
//10 11 12
//20 21 22
//30 31 32

string key[4][3] = {
    {"1","2","3"},
    {"4","5","6"},
    {"7","8","9"},
    {"*","0","#"},
};

map<string, pair<int, int>> m;


//[1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5]	"right"	"LRLLLRLLRRL"
//[7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2]	"left"	"LRLLRRLLLRR"
//[1, 2, 3, 4, 5, 6, 7, 8, 9, 0]	"right"	"LLRLLRLLRL"
string solution(vector<int> numbers, string hand) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {         
            m[key[i][j]] = { i,j };
        }
    }

    string answer = "";

    pair<int, int> p1 = {3,0};
    pair<int, int> p2 = {3,2};

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7) {
            string L = to_string(numbers[i]);
            p1 = m[L];
            answer += "L";

        }
        else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9) {
            string R = to_string(numbers[i]);
            p2 = m[R];
            answer += "R";
        }
        else {
            string M = to_string(numbers[i]);
            if ((abs(m[M].first - p1.first) + abs(m[M].second - p1.second)) == (abs(m[M].first - p2.first) + abs(m[M].second - p2.second))) {
                if (hand == "right") {
                    p2 = m[M];
                    answer += "R";
                }
                else if (hand == "left") {
                    p1 = m[M];
                    answer += "L";
                }
            }
            else if ((abs(m[M].first - p1.first) + abs(m[M].second - p1.second)) > (abs(m[M].first - p2.first) + abs(m[M].second - p2.second))) {
                p2 = m[M];
                answer += "R";
            }
            else {
                p1 = m[M];
                answer += "L";
            }
        }
    }


    return answer;
}