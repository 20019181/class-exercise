#include <iostream>
#include <iomanip>

using namespace std;
//create constant for the percentage off when item are on sale and profir desired

const double DISCOUNT PERCENTAGE =0.15;
const double PROFIT DESIRED = 0.10;

int main()
{
    // Define variable for total cost of merchandise, salary of employees, yearly rent, and estimented electricity cost
    double totalCostOfMerchandise;
    double salaryOfEmployees;
    double yearlyRent;
    double estimentedelectricityCost;

    //Define variable for total cost desired grossincome and markup percentage
    double totalCostOfMerchandise;
    double desiredGrossIncome;
    double markupPercentage;

    ////set the formatting for the screen output of decimal value to 2 decimal place
    cout << fixed << setprecision(2)

    // prompt user to enter the total cost of the merchandise
    cout << "Enter total cost of merchandise: " <<endl;
    cin >> totalCostOfMerchandise;

    //Output a blank line
    cout << endl;

    //prompt user to enter salary of the emloyee (incl]
    cout << "enter salary of the employees (including yours):"
    cin >> salaryOfEmployees;

    //output a blank line
    cout << endl;

    //prompt user to enter the yearly rent
    cout << "Enter yearly rent: "  <<endl;
    cin >> yearlyRent

    //Output a blank line
    cout <<endl;

    //Assign total cost and desiredGross income
    totalcosts=totalCostOfMerchandise + salaryOfEmployees
    desiredGrossIncome= totalCostOfMerchandise + (totalCostOfMerchandise* profit desiredGrossIncome)

    //Assign Markup Percentage
    markupPercentage = (((desiredGrossIncome/totalCostOfMerchandise)-1)*100)*(1* discount PERCENTAGE)

    //output mark up percentage
    cout << "Mechandise should be marked up" << markupPercentage

    return 0;
}
