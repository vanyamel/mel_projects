#include <iostream>
using namespace std;

struct Student {
    char name[50];
    int group;
    int marks[5];
};

int main()
{
    Student students[10]{};

    for (Student& student : students) {
        cout << "Enter the student's name and group: ";
        cin >> student.name >> student.group;

        for (int& mark : student.marks) {
            cout << "Enter mark: ";
            cin >> mark;
        }
    }

    bool found{ false };

    for (Student& student : students) {
        bool badMarkFound{ false };

        for (int mark : student.marks) {
            if (mark < 4) {
                badMarkFound = true;
                break;
            }
        }

        if (!badMarkFound) {
            found = true;
            cout << student.name << ' ' << student.group << endl;
        }
    }

    if (!found) {
        cout << "There are no students with all marks above 4.";
    }

    return 0;
}