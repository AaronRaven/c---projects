#include <iostream>
#include <cmath>

int main()
{
//declaration of varables
float a,b;
int choice;
//declaration of functions
void Division(float,float);
void Multiplication(float,float);
void Sine(float);
void Cosine(float);
void Tangent(float);
/* 
bellow is the main user interface, where users chan choose math function.
do while serves as error handling. If person inputs number not on the list,
software will ask him to input provided one.
*/
do {
std::cout << "Welcome to the semi-scientific calculator! Below are the options: \n";
std::cout << "Press '1' for division\n";
std::cout << "Press '2' for multiplication\n";
std::cout << "Press '3' for Sine\n";
std::cout << "Press '4' for Cosine\n";
std::cout << "Press '5' for Tangent\n";
std::cout << "Please enter a choice: ";
std::cin >> choice;
} while (choice < 1 || choice > 5);

//bellow are the switch cases, that function like IF in Python       
switch(choice)
{
case 1:
std::cout<<"Enter the dividend: "<<std::endl;
std::cin>> a;
std::cout<<"Enter the divisor: "<<std::endl;
std::cin>> b;
Division(a,b);
break;

case 2:
std::cout<<"Enter the multiplicand: "<<std::endl;
std::cin>> a;
std::cout<<"Enter the multiplication: "<<std::endl;
std::cin>> b;
Multiplication(a,b);
break;

case 3:
std::cout<<"Enter a number to calculate the sine: "<<std::endl;
std::cin>> a;
Sine(a);
break;

case 4:
std::cout<<"Enter a number to calculate the cosine: "<<std::endl;
std::cin>> a;
Cosine(a);
break;

case 5:
std::cout<<"Enter a number to calculate the tangent: "<<std::endl;
std::cin>> a;
Tangent(a);
break;
}
}
//Division functions has IF for error handling of division by zero
void Division(float a, float b) {
    if (b == 0) {
        std::cout << "Division by zero is not allowed.\n";
    } else {
        float product  = a / b;
        std::cout << "The product is: " << product << "\n";
    }
}

void Multiplication(float a, float b) {
    float product = a * b;
    std::cout << "The product is: " << product << "\n";
}
//remaining functions use domestic C++ functions for sin, cosine and tangent
void Sine(float a) {
    float sine = sin(a);
    std::cout << "Sine is: " << sine << "\n";
}

void Cosine(float a) {
    float cosine = cos(a);
    std::cout << "Cosine is: " << cosine << "\n";
}

void Tangent(float a) {
    float tangent = tan(a);
    std::cout << "Tangent is: " << tangent << "\n";
}