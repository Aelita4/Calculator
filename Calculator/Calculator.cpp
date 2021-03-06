﻿#include <iostream>

void add();
void sub();
void mul();
void div();
double pow(int a, int n);

int main()
{
    system("title Basic Calculator");
    char choice;
    using namespace std;
    cout << "===========>Calculator<===========\n";
    cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Raise to power\n6.Exit\n\n";
    cout << "Choice: ";
    cin >> choice;

    switch (choice) 
    {
    case '1':
        system("cls");
        add();
    break;


    case '2':
        system("cls");
        sub();
    break;


    case '3':
        system("cls");
        mul();
    break;


    case '4':
        system("cls");
        div();
    break;


    case '5':
        system("cls");
        int a;
        int n;

        std::cout << "Number: ";
        std::cin >> a;
        std::cout << "Raise to power: ";
        std::cin >> n;
        std::cout << pow(a, n);
    break;


    case '6':
        exit(0);
    break;


    default:
        cout << "Nope.";
        exit(0);
    }
    return 0;
}
void add()
{
    double a;
    double b;
    double score;

    std::cout << "First number: ";
    std::cin >> a;
    std::cout << "Secound number: ";
    std::cin >> b;

    score = a + b;

    std::cout << "Score: " << score;
}
void sub()
{
    double a;
    double b;
    double score;

    std::cout << "First number: ";
    std::cin >> a;
    std::cout << "Secound number: ";
    std::cin >> b;

    score = a - b;

    std::cout << "Score: " << score;
}
void mul()
{
    double a;
    double b;
    double score;

    std::cout << "First number: ";
    std::cin >> a;
    std::cout << "Secound number: ";
    std::cin >> b;

    score = a * b;

    std::cout << "Score: " << score;
}
void div()
{
    double a;
    double b;
    double score;

    std::cout << "First number: ";
    std::cin >> a;
    std::cout << "Secound number: ";
    std::cin >> b;

    if (b != 0)
    {
        score = a / b;

        std::cout << "Score: " << score;
    }
    else
    {
        system("cls");
        std::cout << "You can't divide by 0!";
    }
}

double pow(int a, int n)
{
    bool isNegative = false;
    if (n < 0)
    {
        n = -n;
        isNegative = true;
    }

    if (n == 0) return 1;
    else
    {
        if(isNegative) return 1 / (a * pow(a, n - 1));
        else return a * pow(a, n - 1);
    }
}