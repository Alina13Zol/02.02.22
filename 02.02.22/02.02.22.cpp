// 02.02.22.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;

class Student
{
public:
    string fio;
    int ID;
    double mark;

public:
    Student() {
        cout << endl << "Object create without param";
    };

    Student(string fio) {
        this->fio = fio;
        cout << endl << "Object create with 1 param";
    };

    Student(string fio, int ID, double mark) {
        this->fio = fio;
        this->ID = ID;
        this->mark = mark;
        cout << endl << "Object create";
    };

    ~Student() { cout << " Bye" << endl; };

    void show_stu_details();
};

void Student::show_stu_details()
{
    cout << "\n\n**** Details of  Student ****";
    cout << "\nStudent Name      :  " << fio;
    cout << "\nStudent ID    :  " << ID;
    cout << "\nStudent Mark       :  " << mark;
    cout << "\n-------------------------------\n\n";

}

int main()
{
    Student stu1("Tom Smith", 5682, 5);
    stu1.show_stu_details();

    Student stu2("Petr Tomson", 3364, 2.5);
    stu2.show_stu_details();

    Student stu3;
    stu3.fio = "Bob Ivanov";
    stu3.ID = 1834;
    stu3.mark = 3.5;
    stu3.show_stu_details();

    return 0;
}
