#include <iostream>
#include "Father.h"
int main(int argc, char const *argv[])
{
	Father fa("Lin",24,"student");
	using namespace std::cout;
	using namespace std::endl;
	cout<<"hello:\t"<<fa.getName()<<"\nYou are "<<fa.getAge()<<" this year.\n";
	return 0;
}