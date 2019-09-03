// Cpp_project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void calc_figures(double interest, double bal)
{
    double total_due;
    double min_pay;
        total_due = bal+interest;
        std::cout<<"\nYour total interest is :"<<interest;
        std::cout<<"\nYour Total Amount due is :"<<total_due;

       double ten_per = (total_due *10)/100;

            if(total_due<=10){
                min_pay=total_due;
            }
            else
              {
                  if(ten_per<10)
                       min_pay=10;

                 else
                      min_pay = ten_per;
              }
              std::cout<<"\nMinimum amount due is :"<<min_pay<<"\n";
}

//function to calculate salary with 7.6% increment for user suggested months
// params previous salary from user, no of months for increment
// returns void.. prints on screen
void ch3q2(double bal)
{
    double interest;

    if(bal<=1000)
    {
        interest=bal*(1.5/100);
        calc_figures(interest, bal);
    }

    else
    {
         interest=bal*(1/100);
        calc_figures(interest,bal);
    }
}


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


	/*Ch2 Q3 starts from here
	double sal;
	int nom; // variable for storing number of months of increment
	std::cout << "Enter your monthly salary:";
	std::cin >> sal;
	std::cout << "Enter for how many months do you want the increment for ??";
	std::cin >> nom;
	ch2Q3(sal, nom);
	*/

	/*Ch3 Q2 starts from here */
	double bal;
    string user_input="Y";
    while((user_input=="Y")||(user_input=="y"))
    {
        std::cout<<"Do you continue ? (Y/N) ";
        std::cin>>user_input;

        if((user_input=="y") || (user_input=="Y"))
        {
        std::cout << "What is Account Balance ? ";
        std::cin>>bal;
        ch3q2(bal);
        }
        else
        {
            break;
        }
    }



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
