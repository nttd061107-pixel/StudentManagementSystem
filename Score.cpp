#include "Score.h"
using namespace std;

Score::Score(float processScore, float finalScore) {
    this->processScore = processScore;
    this->finalScore = finalScore;
}

float Score::average() const {
    return processScore * 0.4f + finalScore * 0.6f;
}

string Score::result() const {
    return average() >= 5 ? "Dat" : "Rot";
}