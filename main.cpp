#include "Stack.h"
#include "Student.h"
http://stackoverflow.com/questions/1642091/storing-char-array-in-a-class-and-then-returning-it
int main()
{
	try
	{

		Stack<int> integerStack;
		Stack<string> stringStack;

		integerStack.push(7);
		cout << integerStack.Top() << endl;
		integerStack.pop();
		integerStack.pop();

	}
	catch (exception const& ex)
	{
		cerr << "Exeption: " << ex.what() << endl;
		return -1;
	}
}