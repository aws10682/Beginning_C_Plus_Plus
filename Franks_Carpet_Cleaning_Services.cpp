// Franks_Carpet_Cleaning_Services.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*franks carpet cleaning services............
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    std::cout << "Welcome to Frank's carpet cleaning Services\n";
    const int charge_small_room(25);
    const int charge_large_room(35);
    const double tax(0.06);
    double sales_tax_rate();
    int number_of_small_rooms(0);
    int number_of_large_rooms(0);
    double cost(0);
    double value_of_tax(0);
    
    //
    //
    //
    cout << "Number of small rooms: "; cin >> number_of_small_rooms;
    cout << "number of large rooms: "; cin >> number_of_large_rooms;
    cout << "price per small room:$ " << charge_small_room<<endl;
    cout << "price per large room:$ " << charge_large_room<<endl;
    double cost_before_tax = (number_of_small_rooms * charge_small_room) + (number_of_large_rooms * charge_large_room);
    cout << "cost:& " << cost_before_tax<< endl;//
    //cout << "Tax:$ " << tax << endl;
   // cost = (number_of_small_rooms * charge_small_room) + (number_of_large_rooms * charge_large_room) + sales_tax_rate;
    value_of_tax = cost_before_tax * tax;
    cout << "Tax:$ " << value_of_tax << endl;;
    //sales_tax_rate = cost * tax;
    cost = (charge_small_room * number_of_small_rooms) + (charge_large_room * number_of_large_rooms) + value_of_tax;
    cout << "Total estimate: $ " << cost<<endl;
    cout << "This estimate is valid for : 30 days\n";
    return 0;
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
