#include "string"
using namespace std;

class Student
{
private:
    string name_;
    int score_;
public:
    Student(string name, int score);
    ~Student();
    string GetName() {
        return name_;
    }

    int GetScore() {
        return score_;
    }
};

Student::Student(string name, int score) : name_(name), score_(score) {
}

Student::~Student() {
}
