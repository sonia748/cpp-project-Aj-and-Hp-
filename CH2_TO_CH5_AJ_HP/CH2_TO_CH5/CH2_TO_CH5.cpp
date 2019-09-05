// Cpp_project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double Ch4Q2calculatehat(int height, double weight)
{
 double hatsize = 2.9 * (weight / height);
 return hatsize;
}

double Ch4Q2calculatejacket(int height, double weight, int age)
{
  double jacketsize = (height * weight)/288;
  if((age%10 ==0) && (age>=30))
     jacketsize = jacketsize + 0.125;

  return jacketsize;
}

double Ch4Q2calculatewaist(double weight, int age)
{
  double waistsize = weight/5.7;

  if((age%2 == 0) && (age>=28))
      waistsize=waistsize + 0.1;

  return waistsize;
}

void ch3q3(int month, int day)
{
	int endDate = 19;
	if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
	{

		std::cout << "You are an Aries!\n";
		std::cout << "Aries(March 21 - April 19)\n";

		if (month == 4)
		{
			if ((day == endDate) || (day == endDate + 2))
				std::cout << "you are cusp with Taurus\n";
		}
	}
	else if
		((month == 4 && day >= 20) || (month == 5 && day <= 20))
	{

		std::cout << "You are an Taurus!\n";
		std::cout << "Taurus(April 20 - May 20)\n";

		if (month == 5)
		{
			if ((day == endDate + 1) || (day == endDate + 2) || (day == endDate + 3))
				std::cout << "you are cusp with Gemini\n";
		}

	}
	if ((month == 5 && day >= 21) || (month == 6 && day <= 21))
	{
		std::cout << "You are an Gemini!\n";
		std::cout << "Gemini(May 21 - June 21)\n";

		if (month == 6)
		{

			if ((day == endDate + 1) || (day == endDate + 2) || (day == endDate + 3) || (day == endDate + 4))
				std::cout << "you are cusp with Cancer\n";
		}
	}
	else if
		((month == 6 && day >= 22) || (month == 7 && day <= 22))
	{

		std::cout << "You are an Cancer!\n";
		std::cout << "Cancer(June 22 - July 22)\n";

		if (month == 7)
		{

			if ((day == endDate + 2) || (day == endDate + 3) || (day == endDate + 4))
				std::cout << "you are cusp with Leo\n";
		}
	}

	if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
	{
		std::cout << "You are an Leo!\n";
		std::cout << "Leo(July 23 - August 22)\n";

		if (month == 8)
		{

			if ((day == endDate + 2) || (day == endDate + 3) || (day == endDate + 4))
				std::cout << "you are cusp with Virgo\n";
		}

	}
	else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
	{

		std::cout << "You are an Virgo!\n";
		std::cout << "Virgo(August 23 - September 22)\n";

		if (month == 9)

		{

			if ((day == endDate + 2) || (day == endDate + 3) || (day == endDate + 4))
				std::cout << "you are cusp with Libra\n";

		}
	}

	else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
	{
		std::cout << "You are an Libra!\n";
		std::cout << "Libra(September 23 - October 22)\n";

		if (month == 10)

		{

			if ((day == endDate + 2) || (day == endDate + 3) || (day == endDate + 4))
				std::cout << "you are cusp with Scorpio\n";

		}
	}
	else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
	{

		std::cout << "You are an Scorpio!\n";
		std::cout << "Scorpio(October 23 - November 21)\n";

		if (month == 11)

		{

			if ((day == endDate + 1) || (day == endDate + 2) || (day == endDate + 3))
				std::cout << "you are cusp with Sagittarius\n";

		}

	}
	else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
	{
		std::cout << "You are an Sagittarius!\n";
		std::cout << "Sagittarius(November 22 - December 21)\n";

		if (month == 12)
		{

			if ((day == endDate + 1) || (day == endDate + 2) || (day == endDate + 3))
				std::cout << "you are cusp with Cpricorn\n";

		}
	}
	else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
	{
		std::cout << "You are an Capricorn!\n";
		std::cout << "Capricorn(December 22 - January 19)\n";

		if (month == 1)

		{

			if ((day == endDate - 1) || (day == endDate) || (day == endDate + 1) || (day == endDate + 2))

				std::cout << "you are cusp with Aquarius\n";
		}

	}
	else if ((month == 1 && day >= 20) || (month == 2 && day <= 18))
	{
		std::cout << "You are an Aquarius!\n";
		std::cout << "Aquarius(January 20 - February 18)\n";

		if (month == 2)

		{

			if ((day == endDate - 2) || (day == endDate - 1) || (day == endDate) || (day == endDate + 1))
				std::cout << "you are cusp with pisces\n";
		}
	}
	else if ((month == 2 && day >= 19) || (month == 3 && day <= 20))
	{

		std::cout << "You are an pisces!\n";
		std::cout << "Pisces(February 19 - March 20)\n";

		if (month == 3)

		{

			if ((day == endDate) || (day == endDate + 1) || (day == endDate + 2))
				std::cout << "you are cusp with Aries\n";
		}
	}
}


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

	/*Ch3 Q2 starts from here
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
    } */


	/*Ch3 Q3 starts here
	int month, day;
	char answer, space;
	do
	{
		std::cout << "Enter your Birthdate in MM/DD Format \n";
		std::cin >> month >> space >> day;
		ch3q3(month, day);

		std::cout << "Would you like to enter another birthdate??\n";
		std::cin >> answer;
	} while (answer == 'y' || answer == 'Y');

	std::cout << " Good Bye! See you next time.\n";
	exit;
	return 0;
*/

/* Ch4 Q2 starts here */

int height;
double weight, hsize, jsize, wsize;
int age;
string answer;

std::cout<<"Do you want to continue (Y/N)? ";
std::cin>>answer;

  while((answer=="y") || (answer=="Y"))
  {


     std::cout<<"\nEnter your height in inches:";
     std::cin>>height;

     std::cout<<"\nEnter your Weight in pounds:";
     std::cin>>weight;

     std::cout<<"\nEnter your age:";
     std::cin>>age;

     hsize = Ch4Q2calculatehat(height,weight);
     std::cout<<"\nYour ideal hat should be of size :"<<hsize<<" inches";

     jsize= Ch4Q2calculatejacket(height, weight, age);
     std::cout<<"\nYour ideal jacket size (chest in inches) should be :"<<jsize;

    wsize = Ch4Q2calculatewaist(weight,age);
    std::cout<<"\nYour ideal waist size for trousers would be: "<<wsize;

    std::cout<<"\nDo you want to continue (Y/N)? ";
    std::cin>>answer;
  }

}
