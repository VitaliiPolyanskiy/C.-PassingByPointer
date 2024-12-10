#include <iostream>
using namespace std;

// Передача аргументов по значению
void PassingByValue (int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

// Передача аргументов по указателю
void PassingByPointer (int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	 int n1, n2; 
	 cout << "Enter the first number: ";
	 cin >> n1;
	 cout << "Enter the second number: ";
	 cin >> n2;
	 PassingByValue (n1, n2);
	 cout << "\nNumber 1 = " << n1;
	 cout << "\nNumber 2 = " << n2;
	 PassingByPointer (&n1, &n2);
	 cout << "\nNumber 1 = " << n1;
	 cout << "\nNumber 2 = " << n2;

	 return 0;
}
