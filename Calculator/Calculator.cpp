#include <iostream>

void add();
void sub();
void mul();
void div();
int pow(int a, int n);

int main()
{
    char choice;
    using namespace std;
    cout << "===========>Calculator<===========\n";
    cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Raise to power\n";
    
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

int pow(int a, int n)
{
    if (n == 0) return 1;
    else return a * pow(a, n - 1);
}