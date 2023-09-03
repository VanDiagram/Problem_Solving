#include <iostream>
#include <vector>
#include <iomanip>

void askValue(int, int &, double &);
void calculate(int, int, double);

int main()
{
    const int EMPLOYEE = 4;
    std::vector<int> hours(EMPLOYEE);
    std::vector<double> pay_rate(EMPLOYEE);
    int index = 0;
    double wage;

    std::cout << '\t' << '\t' << "This program will calculate the wage of each employee. " << '\n';
    std::cout << "------------------------------------------------------------------" << '\n'
              << '\n';

    //! setprecision of number
    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    // ask for hours and pay rates of each worker
    for (index = 0; index < EMPLOYEE; index++)
    {
        askValue(index, hours[index], pay_rate[index]);
    }

    // calculate and return the wage of each worker
    std::cout << '\t' << '\t' << "Here is the gross pay of each worker." << '\n';
    std::cout << "------------------------------------------------------------------" << '\n'
              << '\n';
    for (index = 0; index < EMPLOYEE; index++)
    {
        calculate(index, hours[index], pay_rate[index]);
    }

    return 0;
}

void askValue(int index, int &hours, double &pay_rate)
{
    std::cout << "Please enter the hour work of worker #" << (index + 1) << ": ";
    std::cin >> hours;

    std::cout << "Please enter the payrate of worker #" << (index + 1) << ": ";
    std::cin >> pay_rate;
}

void calculate(int index, int hours, double pay_rate)
{
    double wage = hours * pay_rate;
    std::cout << "The wage of worker #" << (index + 1);
    std::cout << " is: $" << wage << std::endl;
}