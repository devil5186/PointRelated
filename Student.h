#ifndef STUDENT_H
#define STUDENT_H
#include<string>
#include"Man.h"
class Student:Man
{
private:
    std::string name;
    int age;
    std::string school;
public:
    Student(std::string name, int age = 0, std::string school = "");
    void setName(std::string);
    std::string	getName();
    void setAge(int);
    int getAge();
    void setschool(std::string);
    std::string getSchool();
};
#endif