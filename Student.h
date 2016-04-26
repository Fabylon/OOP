#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

class person
{
public:
	person();
	~person();
	person(string name, int age, string department, int salary);
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
	void setDepartment(string department);
	string getDepartment();
	void setSalary(int salary);
	int getSalary();
private:
	string _name;
	int _age;
	string _department;
	int _salary;
};

person::person()
{
}
person::~person()
{
}

person::person(string name, int age, string department, int salary)
{
	setName(name);
	setAge(age);
	setDepartment(department);
	setSalary(salary);

}

void person::setName(string name)
{
	_name = name;
}

void person::setAge(int age)
{
	_age = age;
}

void person::setDepartment(string department)
{
	_department = department;
}

void person::setSalary(int salary)
{
	_salary = salary;
}

string person::getName()
{
	return _name;
}
int person::getAge()
{
	return _age;
}
string person::getDepartment()
{
	return _department;
}
int person::getSalary()
{
	return _salary;
}