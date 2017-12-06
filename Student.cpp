#include"Student.h"
Student::Student(std::string name, int age,std::string school): Man("Lin",30,"Doc"), name(name), age(age),school(school)
{

}

void Student::setName(std::string name)
{
    this->name = name;
}
std::string	Student::getName()
{
    return name;
}
void Student::setAge(int age)
{
    this->age = age;
}
int Student::getAge()
{
    return age;
}
void Student::setschool(std::string school)
{
    this->school = school;
}
std::string Student::getSchool()
{
    return school;
}