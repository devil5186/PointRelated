#ifndef MAN_H
#define MAN_H
#include<string>
class Man
{
private:
    std::string name;
    int age;
    std::string job;
public:
    explicit Man(std::string, int=0, std::string job = "");
    void setAge(int);
    int getAge();
    void setName(std::string);
    std::string getName();
    void setJob(std::string);
    std::string getJob();
};
#endif