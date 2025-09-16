#include <cstdint>
#include <cstdio>
#include <string>
using namespace std;

struct Students {
    int id;
    string name;
    char grade;
    bool passed;
};

Students student(int id, string name, char grade, bool passed = 1) {
    Students student_details = {id, name, grade, passed};
    return student_details;
}

int main(void)
{
    Students student_details = student(3, "Juanith Thomas", 'A', 1);

    printf("Student ID = %d, Student name = %s, Student grade = %c, Student passed = %d%%\n",
           student_details.id,
           student_details.name.c_str(), // convert std::string to const char*
           student_details.grade,        // single char
           student_details.passed);      // 1 or 0 (true/false)
}
