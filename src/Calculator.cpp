// Calculator.cpp
#include <iostream>
int main()
{
    using namespace std;
    //Print Out ASCII Calculator Font:3D-ASCII
    std::cout << R"(
 ________  ________  ___       ________  ___  ___  ___       ________  _________  ________  ________     
|\   ____\|\   __  \|\  \     |\   ____\|\  \|\  \|\  \     |\   __  \|\___   ___\\   __  \|\   __  \    
\ \  \___|\ \  \|\  \ \  \    \ \  \___|\ \  \\\  \ \  \    \ \  \|\  \|___ \  \_\ \  \|\  \ \  \|\  \   
 \ \  \    \ \   __  \ \  \    \ \  \    \ \  \\\  \ \  \    \ \   __  \   \ \  \ \ \  \\\  \ \   _  _\  
  \ \  \____\ \  \ \  \ \  \____\ \  \____\ \  \\\  \ \  \____\ \  \ \  \   \ \  \ \ \  \\\  \ \  \\  \| 
   \ \_______\ \__\ \__\ \_______\ \_______\ \_______\ \_______\ \__\ \__\   \ \__\ \ \_______\ \__\\ _\ 
    \|_______|\|__|\|__|\|_______|\|_______|\|_______|\|_______|\|__|\|__|    \|__|  \|_______|\|__|\|__|                                                                                                      
)" << '\n';

    //Real Stuff
    int opt = {};
    double num1 = {};
    double num2 = {};
    double out = {};
    bool run = 1;
    while(run){
    cout << R"(
(1)Adition
(2)Subtraction
(3)Multiplcation
(4)Division
(5)Exit
Enter Your Choice: )";
    cin >> opt;
    switch (opt) {
    case 1:
        cout << "Add" << endl;
        cout << "Enter First Number: ";
        cin >> num1;
        cout << endl << "Enter The Second Number: ";
        cin >> num2;
        cout << endl;
        out = num1 + num2;
        cout << out << endl;
        break;
    case 2:
        cout << "Subtraction" << endl;
        cout << "Enter First Number: ";
        cin >> num1;
        cout << endl << "Enter The Second Number: ";
        cin >> num2;
        cout << endl;
        out = num1 - num2;
        cout << out << endl;
        break;
    case 3:
        cout << "Multiplcation" << endl;
        cout << "Enter First Number: ";
        cin >> num1;
        cout << endl << "Enter The Second Number: ";
        cin >> num2;
        cout << endl;
        out = num1 * num2;
        cout << out << endl;
        break;
    case 4:
        cout << "Division" << endl;
        cout << "Enter First Number: ";
        cin >> num1;
        cout << endl << "Enter The Second Number: ";
        cin >> num2;
        cout << endl;
        out = num1 / num2;
        cout << out << endl;
        break;
    case 5:
        run = 0;
        break;
    default:
        cout << "Invaled Selection" << endl;
     }
    }
}
