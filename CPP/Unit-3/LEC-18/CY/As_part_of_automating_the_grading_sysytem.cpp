//As part of automating the grading system, Vivek wants to create a Course class that consists of 6 Test class objects for different papers/subjects. You are expected to declare and define these two classes as per the requirements below.

#include <iostream>
#include <cstring>
using namespace std;

class Test {
private:
    char paper[20];
    int marks;

public:
    Test() {
        strcpy(paper, "Computer");
        marks = 0;
    }

    Test(const char* p) {
        strcpy(paper, p);
        marks = 0;
    }

    Test(int m) {
        strcpy(paper, "Computer");
        marks = m;
    }

    Test(const char* p, int m) {
        strcpy(paper, p);
        marks = m;
    }

    int getMarks(const char* p) {
        if (strcmp(paper, p) == 0) {
            return marks;
        }
        return 0;
    }
};

class Course {
private:
    Test tests[6];

public:
    Course() {}

    Course(Test arr[]) {
        for (int i = 0; i < 6; i++) {
            tests[i] = arr[i];
        }
    }

    int getAssessmentSumForPaper(const char* p) {
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += tests[i].getMarks(p);
        }
        return sum;
    }
};

int main() {
    Test testArr[6];

    for (int i = 0; i < 6; i++) {
        char paper[20];
        int marks;
        cin >> paper >> marks;

        if (strcmp(paper, "None") == 0) {
            testArr[i] = Test(marks);
        } else if (marks == 0) {
            testArr[i] = Test(paper);
        } else {
            testArr[i] = Test(paper, marks);
        }
    }

    Course course(testArr);

    cout << "Maths: " << course.getAssessmentSumForPaper("Maths") << endl;
    cout << "Science: " << course.getAssessmentSumForPaper("Science") << endl;
    cout << "Computer: " << course.getAssessmentSumForPaper("Computer") << endl;

    return 0;
}
