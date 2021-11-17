#include <iostream>
#include "DZ8.h"

using namespace std;



int main()
{
	

	{
		
		cout << "Task 1:\n";
		int numerator = 10;
		double denominator = 18;
		try
		{
			if (denominator == 0) throw overflow_error("Division by zero");
			cout << numerator << " / " << denominator << " = " << div(numerator, denominator);
		}
		catch (overflow_error)
		{
			cout << "Division by zero!";
		}
	}

	

	{
		
		cout << "\n\nTask 2:\n";
		Bar* bar = new Bar();
		int n = 0;
		try
		{
			bool nNotZero = true;
			while (nNotZero)
			{
				cout << "Enter n: ";
				cin >> n;
				if (n != 0)
				{
					bar->set(n);
				}
				else nNotZero = false;
			}
		}
		catch (Ex& e)
		{
			cout << "Exception thrown, code " << e.getX();
		}
		delete bar;
	}

	

	{
		
		cout << "\nTask 3:\n";
		int fieldSize = 10;
		Robot* robot = new Robot(fieldSize);

		while (true)
		{
			robot->printCoordinates();
			robot->move();
		}
		delete robot;
		
	}

	

}