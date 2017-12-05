#ifndef FATHER_H
#define FATHER_H
#include"Father.h"
#include<string>
class Father
{
private:
	std::string name;
	int age;
	std::string job;
public:
	explicit Father(std::string,int,std::string job="");
	void setAge(int);
	void setName(std::string);
	std::string getName();
	int getAge();
};
#endif