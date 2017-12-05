#include "Father.h"
Father::Father(std::string name,int age,std::string job):name(name),age(age),job(job){

}
void Father::setName(std::string name){
	this->name=name;
}
void Father::setAge(int age){
	this->age=age;
}
std::string Father::getName(){
	return name;
}
int Father::getAge(){
	return age;
}