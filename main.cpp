#include <iostream>
#include "Man.h"
#include "Student.h"
int main(int argc, char const *argv[])
{
    Man ma("Chen", 12, "student");
    Student st("Lin",24,"XDU");
    using std::cout;
    using std::endl;
    cout << "hello:\t" << ma.getName() << "\nYou are " << ma.getAge() << " this year.\nYou are a "<<ma.getJob()<<".\n";
    cout<<"---------------------\n";
    cout << "hello:\t" << st.getName() << "\nYou are " << st.getAge() << " this year.\nYour school is "<<st.getSchool()<<".\n";
    return 0;
}