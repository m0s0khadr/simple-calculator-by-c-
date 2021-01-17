#include <iostream>

using namespace std;

int opra(int x, int y, char a);

int main() {
	int  x , y;
	char a;
	
		cout << "input the first number:";
		cin >> x;

		while (cin.fail()) {
			cin.clear();
			cin.ignore();
			cout << "input the first number agin:";
			cin >> x;
		}

		cout << "input your opration + - * /:";
		cin >> a;

		while (cin.fail()) {
			cin.clear();
			cin.ignore();
			cout << "input the first number agin:";
			cin >> a;
		}

		cout << "input the scound number:";
		cin >> y;

		while (cin.fail()) {
			cin.clear();
			cin.ignore();
			cout << "input the first number agin:";
			cin >> y;
		}

		while (y == 0 && a == '/')
		{

			cout << "you can't divide any nuber on zero." << endl;
			cout << "plese retyping the scound number." << endl;
			cin >> y;

		}
		
		while (a!='+'|| a != '-' || a != '*' || a != '/')
		{
			if (a=='+'|| a == '/' || a == '-' || a == '*')
			{
				break;
			}
			cout << "yout should seclect one of theses + / * -."<<endl;
			cin >> a;
		}

	cout << opra(x, y, a) << endl;

}

int opra(int x, int y, char a) {
	switch (a)
	{
	case '+':
		return x + y;
		break;
	case '-':
		return x - y;
		break;
	case '*':
		return x * y;
		break;
	case '/':
		return x / y;
		break;
	}
}
