#include "Stack.h"
#include "Student.h"

int main()
{
	try
	{

		Stack<int> integerStack;
		Stack<string> stringStack;
		vector<person> personvektor;

		integerStack.push(7);
		cout << integerStack.Top() << endl;
		integerStack.pop();
		//integerStack.pop();

		person employee1("Henrik Andersson", 34, "Software", 27823);
		personvektor.push_back(employee1);

		vector<person>::iterator i;
		for (i = personvektor.begin(); i < personvektor.end(); i++)
			cout << i->getDepartment();
		int house;
		cin >> house;
	}
	catch (exception const& ex)
	{
		cerr << "Exeption: " << ex.what() << endl;
		return -1;
	}
}