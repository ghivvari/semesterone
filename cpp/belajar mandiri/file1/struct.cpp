#include <iostream>
using namespace std;

struct Student {
    string name;
    int         age;
    double      gpa;
};



int main() {
    Student class_[3] = {
        {"Ivy", 19, 3.8},
        {"Ben", 20, 3.2},
        {"Nora", 18, 3.9}
    };

    int size = sizeof(class_) / sizeof(class_[0]);

    for (int i = 0; i < size; i++) {
        cout << class_[i].name << " " << class_[i].age << " " << class_[i].gpa << endl;
    }

    return 0;
}