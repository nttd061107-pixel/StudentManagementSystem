#pragma once
#include <string>
using namespace std;

class Score {
private:
    float processScore;
    float finalScore;

public:
    Score(float processScore = 0, float finalScore = 0);

    float average() const;
    string result() const;
};