#include <iostream>

using namespace std;

int main()
{
    int totalCost,salary,yearlyRent,electricityCost;

    cout<<"enter your total cost of the merchandise"<<endl;
    cin>>totalCost;

    cout<<"enter the salary of the employees and include your salary"<<endl;
    cin>>salary;

    cout<<"enter te yearly rent"<<endl;
    cin>>yearlyRent;

    cout<<"enter the electricity cost"<<endl;
    cin>>electricityCost;

    int totalExpences = totalCost + salary + yearlyRent + electricityCost;
    int desiredNetProfit = totalCost * 0.1;
    int newNetProfit = desiredNetProfit/0.85;
    int markUp = (newNetProfit/totalExpences)/totalCost;

    cout<<"The mark up is "<<markUp;


    return 0;
}
