#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

class person
{
public:

	void setName(char *name)
	{
		strcpy(_name, name);
	}
	char getName()
	{
		return *_name;
	}
	void setAge(int *age)
	{
		*age = _age;
	}
	int getAge();
	void setDepartment(char *department)
	{
		strcpy(_department, department);
	}
	char getDepartment()
	{
		return *_department;
	}
	int setWage(int *wage)
	{
		*wage = _wage;
	}
	int getAge();

	person();
	~person();

private:
	char _name[20];
	int _age;
	char _department[20];
	int _wage;
};