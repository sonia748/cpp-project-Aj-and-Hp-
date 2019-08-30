// Cpp_project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//function to calculate salary with 7.6% increment for user suggested months
// params previous salary from user, no of months for increment
// returns void.. prints on screen
void ch2Q3(double prev_sal, int num_mos) {
	double rev_salary = 0.0;
	rev_salary = prev_sal + (prev_sal * (7.6 / 100));

	std::cout << "\nyour rev monthly salary with 7.6% increment is:" << rev_salary;
	rev_salary = rev_salary * num_mos;
	std::cout << "\nyour rev " << num_mos << " months salary is:" << rev_salary;
	prev_sal = prev_sal * (12 - num_mos);
	prev_sal = rev_salary + prev_sal;
	std::cout << "\nyour rev annual salary is:" << prev_sal;
}

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
	/* Ch2 Q2 starts from here
	double sal;
	std::cout << "Enter your monthly salary:";
	std::cin >> sal;
	ch2Q2(sal);
	*/
	

	/*Ch2 Q3 starts from here*/
	double sal;
	int nom; // variable for storing number of months of increment
	std::cout << "Enter your monthly salary:";
	std::cin >> sal;
	std::cout << "Enter for how many months do you want the increment for ??";
	std::cin >> nom;
	ch2Q3(sal, nom);


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
