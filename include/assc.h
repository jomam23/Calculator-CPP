#ifndef CALCA_H
#define CALCA_H

#include <iostream>
#include <string>
//ASCII why? IDK
class StartAscii {
public:
    inline void run() const {
        std::cout << R"(
 ________  ________  ___       ________  ___  ___  ___       ________  _________  ________  ________     
|\   ____\|\   __  \|\  \     |\   ____\|\  \|\  \|\  \     |\   __  \|\___   ___\\   __  \|\   __  \    
\ \  \___|\ \  \|\  \ \  \    \ \  \___|\ \  \\\  \ \  \    \ \  \|\  \|___ \  \_\ \  \|\  \ \  \|\  \   
 \ \  \    \ \   __  \ \  \    \ \  \    \ \  \\\  \ \  \    \ \   __  \   \ \  \ \ \  \\\  \ \   _  _\  
  \ \  \____\ \  \ \  \ \  \____\ \  \____\ \  \\\  \ \  \____\ \  \ \  \   \ \  \ \ \  \\\  \ \  \\  \| 
   \ \_______\ \__\ \__\ \_______\ \_______\ \_______\ \_______\ \__\ \__\   \ \__\ \ \_______\ \__\\ _\ 
    \|_______|\|__|\|__|\|_______|\|_______|\|_______|\|_______|\|__|\|__|    \|__|  \|_______|\|__|\|__|                                                                                                      
)" << '\n';
    }
};

//ADD
class add {
public:
    int num1 = {};
    int num2 = {};
    int sum = {};
    void run() {
        std::cout << "ADDING" << std::endl;
        std::cout << "Enter First Number: ";
        std::cin >> num1;
        std::cout << "Enter Second Number: ";
        std::cin >> num2;

        sum = num1 + num2;
        std::cout << "The Sum is: " << sum << std::endl;
    }
};

//SUBTRACT
class minuss {
public:
    int num1 = {};
    int num2 = {};
    int sum = {};
    void run() {
        std::cout << "Subtracting" << std::endl;
        std::cout << "Enter First Number: ";
        std::cin >> num1;
        std::cout << "Enter Second Number: ";
        std::cin >> num2;

        sum = num1 - num2;
        std::cout << "The Difference is: " << sum << std::endl;
    }
};

//Times
class times {
public:
    int num1 = {};
    int num2 = {};
    int sum = {};
    void run() {
        std::cout << "Multiplying" << std::endl;
        std::cout << "Enter First Number: ";
        std::cin >> num1;
        std::cout << "Enter Second Number: ";
        std::cin >> num2;

        sum = num1 * num2;
        std::cout << "The Product is: " << sum << std::endl;
    }
};

//DIV
class divs {
public:
    int num1 = {};
    int num2 = {};
    int sum = {};
    void run() {
        std::cout << "Dividing" << std::endl;
        std::cout << "Enter First Number: ";
        std::cin >> num1;
        std::cout << "Enter Second Number: ";
        std::cin >> num2;
        if (num2 == 0) {
            std::cout << "ERROR DIV BY 0";
            return;
        }
        else {
            sum = num1 / num2;
            std::cout << "The quotient is: " << sum << std::endl;
        }
    }
};
class mains {
public:
    int opt = {};
    void run() {
        using namespace std;
        cout << "Calculator!";
        bool run = 1;
        while (run) {
            cout << R"(
(1)Adition
(2)Subtraction
(3)Multiplcation
(4)Division
(5)Exit
Enter Your Choice: )";
            cin >> opt;
            switch (opt) {
            case 1: {
                add add;
                add.run();
                break;
            }
            case 2: {
                minuss minus;
                minus.run();
                break;
            }
            case 3: {
                times times;
                times.run();
                break;
            }
            case 4: {
                divs divs;
                divs.run();
                break;
            }
            case 5: {
                run = 0;
                break;
            }
            default:
                cout << "Invaled Selection" << endl;
            }
        }
    }
};
#endif // CALCA_H
