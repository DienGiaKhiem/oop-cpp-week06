#include <iostream>
#include <string>
#include <vector>
using namespace std;

void showScore(string name, double score){
    cout << "Student: " << name << endl;
    cout << "Score: " << score << endl;
}

// Step 4
double calculateAverage(double score1, double score2, double score3){
    return (score1 + score2 + score3) / 3.0;
}

int maxValue(int a, int b){
    return (a > b) ? a : b;
}

// Step 5
struct ScoreInfo {
    double sum;
    double average;
    double maxScore;
    double minScore;
};

ScoreInfo analyzeScores(vector<double> scores){
    ScoreInfo info;
    info.sum = 0;
    info.maxScore = scores[0];
    info.minScore = scores[0];

    for (double s : scores) {
        info.sum += s;
        if (s > info.maxScore) info.maxScore = s;
        if (s < info.minScore) info.minScore = s;
    }
    info.average = info.sum / scores.size();

    return info;
}

int main(){
    string studentName;
    double studentScore;

    // Step 3
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter student score: ";
    cin >> studentScore;

    showScore(studentName, studentScore);

    // Step 4
    double avg = calculateAverage(studentScore, 85.5, 92.0);
    cout << "Average Score: " << avg << endl;
    cout << "Max Value: " << maxValue(10, 20) << endl;

    // Step 5
    vector<double> listScores = {studentScore, 85.5, 92.0};
    ScoreInfo result = analyzeScores(listScores);

    cout << "Total: " << result.sum << endl;
    cout << "Average: " << result.average << endl;
    cout << "Max: " << result.maxScore << " | Min: " << result.minScore << endl;

    return 0;
}