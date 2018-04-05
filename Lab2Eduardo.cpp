#include <iostream>
#include <fstream>


using namespace std;

int
main()
{
	ifstream file;
	file.open("Person.txt");

	int min, max; // min and max is the range of hrs that lay within the boundries
	file >> min >> max; // reads the boundries from the imput file

	int daysworked; // days worked that week
	file >> daysworked; // reads the days worked for that week

	float hoursworked; // hours woked per day
	file >> hoursworked; //reads hrs worked

	if (daysworked == 1)
	{
		int a;
		file >> a;
		hoursworked = a;

	}
	if (daysworked == 2)
	{
		int a, b;
		file >> a >> b;
		hoursworked = a + b;
	}
	if (daysworked == 3)
	{
		int a, b, c;
		file >> a >> b >> c;
		hoursworked = a + b + c;
	}
	if (daysworked == 4)
	{
		int a, b, c, d;
		file >> a >> b >> c >> d;
		hoursworked = a + b + c + d;
	}
	if (daysworked == 5)
	{
		int a, b, c, d, e;
		file >> a >> b >> c >> d >> e;
		hoursworked = a + b + c + d + e;
	}
	if (daysworked == 6)
	{
		int a, b, c, d, e, f;
		file >> a >> b >> c >> d >> e >> f;
		hoursworked = a + b + c + d + e + f;
	}
	if (daysworked == 7)
	{
		int a, b, c, d, e, f, g;
		file >> a >> b >> c >> d >> e >> f >> g;
		hoursworked = a + b + c + d + e + f + g;
	}
	if (daysworked & hoursworked < min)
	{
		hoursworked = (hoursworked < max & hoursworked < min);
		cout << "Dock " << (hoursworked - min); // This should cout if hoursworked were less than the min
	}
	if (daysworked & hoursworked > max)
	{
		hoursworked = (hoursworked > max & hoursworked > min);
		cout << "Overtime " << (hoursworked - max) << endl; // This should cout if hoursworked were more than the max
	}
	else
	{
		hoursworked = (hoursworked < max & hoursworked > min);
		cout << "Normal " << hoursworked << endl; // This should cout if hoursworked were in range
	}


	if (daysworked == 1)
	{
		int a;
		file >> a;
		hoursworked = a;
		cout << hoursworked << endl;
	}
	if (daysworked == 2)
	{
		int a, b;
		file >> a >> b;
		hoursworked = a + b;
		cout << hoursworked << endl;
	}
	if (daysworked == 3)
	{
		int a, b, c;
		file >> a >> b >> c;
		hoursworked = a + b + c;
		cout << hoursworked << endl;
	}
	if (daysworked == 4)
	{
		int a, b, c, d;
		file >> a >> b >> c >> d;
		hoursworked = a + b + c + d;
		cout << hoursworked << endl;
	}
	if (daysworked == 5)
	{
		int a, b, c, d, e;
		file >> a >> b >> c >> d >> e;
		hoursworked = a + b + c + d + e;
		cout << hoursworked << endl;
	}
	if (daysworked == 6)
	{
		int a, b, c, d, e, f;
		file >> a >> b >> c >> d >> e >> f;
		hoursworked = a + b + c + d + e + f;
		cout << hoursworked << endl;
	}
	if (daysworked == 7)
	{
		int a, b, c, d, e, f, g;
		file >> a >> b >> c >> d >> e >> f >> g;
		hoursworked = a + b + c + d + e + f + g;
		cout << hoursworked << endl;
	}
	if (daysworked & hoursworked < min)
	{
		hoursworked = (hoursworked < max & hoursworked < min);
		cout << "Dock " << (hoursworked - min); // This should cout if hoursworked were less than the min
	}
	if (daysworked & hoursworked > max)
	{
		hoursworked = (hoursworked > max & hoursworked > min);
		cout << "Overtime " << (hoursworked - max) << endl; // This should cout if hoursworked were more than the max
	}
	else
	{
		hoursworked = (hoursworked < max & hoursworked > min);
		cout << "Normal " << hoursworked << endl; // This should cout if hoursworked were in range
	}
	

	if (daysworked == 1)
	{
		int a;
		file >> a;
		hoursworked = a;
		cout << hoursworked << endl;
	}
	if (daysworked == 2)
	{
		int a, b;
		file >> a >> b;
		hoursworked = a + b;
		cout << hoursworked << endl;
	}
	if (daysworked == 3)
	{
		int a, b, c;
		file >> a >> b >> c;
		hoursworked = a + b + c;
		cout << hoursworked << endl;
	}
	if (daysworked == 4)
	{
		int a, b, c, d;
		file >> a >> b >> c >> d;
		hoursworked = a + b + c + d;
		cout << hoursworked << endl;
	}
	if (daysworked == 5)
	{
		int a, b, c, d, e;
		file >> a >> b >> c >> d >> e;
		hoursworked = a + b + c + d + e;
		cout << hoursworked << endl;
	}
	if (daysworked == 6)
	{
		int a, b, c, d, e, f;
		file >> a >> b >> c >> d >> e >> f;
		hoursworked = a + b + c + d + e + f;
		cout << hoursworked << endl;
	}
	if (daysworked == 7)
	{
		int a, b, c, d, e, f, g;
		file >> a >> b >> c >> d >> e >> f >> g;
		hoursworked = a + b + c + d + e + f + g;
		cout << hoursworked << endl;
	}
	if (daysworked & hoursworked < min)
	{
		hoursworked = (hoursworked < max & hoursworked < min);
		cout << "Dock " << (hoursworked - min); // This should cout if hoursworked were less than the min
	}
	if (daysworked & hoursworked > max)
	{
		hoursworked = (hoursworked > max & hoursworked > min);
		cout << "Overtime " << (hoursworked - max) << endl; // This should cout if hoursworked were more than the max
	}
	else
	{
		hoursworked = (hoursworked < max & hoursworked > min);
		cout << "Normal " << hoursworked << endl; // This should cout if hoursworked were in range
	}

	if (daysworked == 1)
	{
		int a;
		file >> a;
		hoursworked = a;
		cout << hoursworked << endl;
	}
	if (daysworked == 2)
	{
		int a, b;
		file >> a >> b;
		hoursworked = a + b;
		cout << hoursworked << endl;
	}
	if (daysworked == 3)
	{
		int a, b, c;
		file >> a >> b >> c;
		hoursworked = a + b + c;
		cout << hoursworked << endl;
	}
	if (daysworked == 4)
	{
		int a, b, c, d;
		file >> a >> b >> c >> d;
		hoursworked = a + b + c + d;
		cout << hoursworked << endl;
	}
	if (daysworked == 5)
	{
		int a, b, c, d, e;
		file >> a >> b >> c >> d >> e;
		hoursworked = a + b + c + d + e;
		cout << hoursworked << endl;
	}
	if (daysworked == 6)
	{
		int a, b, c, d, e, f;
		file >> a >> b >> c >> d >> e >> f;
		hoursworked = a + b + c + d + e + f;
		cout << hoursworked << endl;
	}
	if (daysworked == 7)
	{
		int a, b, c, d, e, f, g;
		file >> a >> b >> c >> d >> e >> f >> g;
		hoursworked = a + b + c + d + e + f + g;
		cout << hoursworked << endl;
	}
	if (daysworked & hoursworked < min)
	{
		hoursworked = (hoursworked < max & hoursworked < min);
		cout << "Dock " << (hoursworked - min); // This should cout if hoursworked were less than the min
	}
	if (daysworked & hoursworked > max)
	{
		hoursworked = (hoursworked > max & hoursworked > min);
		cout << "Overtime " << (hoursworked - max) << endl; // This should cout if hoursworked were more than the max
	}
	else
	{
		hoursworked = (hoursworked < max & hoursworked > min);
		cout << "Normal " << hoursworked << endl; // This should cout if hoursworked were in range
	}
	
	if (daysworked == 1)
	{
		int a;
		file >> a;
		hoursworked = a;
		cout << hoursworked << endl;
	}
	if (daysworked == 2)
	{
		int a, b;
		file >> a >> b;
		hoursworked = a + b;
		cout << hoursworked << endl;
	}
	if (daysworked == 3)
	{
		int a, b, c;
		file >> a >> b >> c;
		hoursworked = a + b + c;
		cout << hoursworked << endl;
	}
	if (daysworked == 4)
	{
		int a, b, c, d;
		file >> a >> b >> c >> d;
		hoursworked = a + b + c + d;
		cout << hoursworked << endl;
	}

	if (daysworked & hoursworked < min)
	{
		hoursworked = (hoursworked < max & hoursworked < min);
		cout << "Dock " << (hoursworked - min)*.60; // This should cout if hoursworked were less than the min
	}
	if (daysworked & hoursworked > max)
	{
		hoursworked = (hoursworked > max & hoursworked > min);
		cout << "Overtime " << (hoursworked - max)*.60 << endl; // This should cout if hoursworked were more than the max
	}
	else
	{
		hoursworked = (hoursworked < max & hoursworked > min);
		cout << "Normal " << (hoursworked * .60) << endl; // This should cout if hoursworked were in range
	}

	// ((input - min) * 100) / (max - min)

	system("pause");


	return 0;

	file.close();

}