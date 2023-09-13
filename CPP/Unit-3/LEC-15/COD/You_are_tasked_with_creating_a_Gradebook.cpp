//You are tasked with creating a GradeBook class to automate grade storage for students. The GradeBook class should have the following features:

#include <iostream>
#include <string>

using namespace std;

class GradeBook {
private:
    string courseName;
    string instructorName;

public:
    GradeBook() {}

   
    void setCourseName(const string& name) {
        courseName = name;
    }

    void setInstructorName(const string& name) {
        instructorName = name;
    }

   
    void displayMessage() {
        cout << "Welcome to the grade book for " << courseName << "!" << endl;
        cout << "This course is presented by: " << instructorName << endl;
    }
};

int main() {
    GradeBook gradeBook;

    string courseName, instructorName;

    
    getline(cin, courseName);

    
    getline(cin, instructorName);

    
    gradeBook.setCourseName(courseName);
    gradeBook.setInstructorName(instructorName);

    
    gradeBook.displayMessage();

    return 0;
}
