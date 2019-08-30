// Cpp_project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//function to calculate salary with 7.6% increment
// params previous salary from user
// returns void.. prints on screen
void ch2Q2(double prev_sal) {
	double rev_salary = 0.0;
	rev_salary = prev_sal + (prev_sal * (7.6 / 100));

	std::cout << "\nyour rev monthly salary with 7.6 percent increment is:" << rev_salary;
	rev_salary = rev_salary * 6;
	std::cout << "\nyour rev 6 months salary is:" << rev_salary;
	prev_sal = prev_sal * 6;
	prev_sal = rev_salary + prev_sal;
	std::cout << "\nyour rev annual salary is:" << prev_sal;
}
int main()
{
	
	double sal;
	std::cout << "Enter your monthly salary:";
	std::cin >> sal;
	ch2Q2(sal);
	


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
