#include "Man.h"

Man::Man(std::string name, int age, std::string job): name(name), age(age), job(job)
{

}
void Man::setName(std::string name)
{
    this->name = name;
}
void Man::setAge(int age)
{
    this->age = age;
}
std::string Man::getName()
{
    return name;
}
int Man::getAge()
{
    return age;
}
void Man::setJob(std::string job){
	this->job=job;
}
std::string Man::getJob(){
	return job;
}