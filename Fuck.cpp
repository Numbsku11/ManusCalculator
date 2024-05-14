#include <iostream> 
#include <string>

long double num1;
long double num2;
int oper;

int main() {
    int num3;
    std:: cout << "Hello Buv!\n\nNumber 1:";
    std:: cin >> num1;
    std:: cout << "Number 2: ";
    std:: cin >> num2;
    std:: cout << "What Operation would you like to perform? \n1.Multiplication\n2.Division\n3.Subtraction\n4.Addition\n";
    std:: cin >> oper;
   
   switch (oper){
       
       case 1:
       num3 = num1 * num2;
       std:: cout << num3;
       break;
       
       case 2:
       float num4;
       num4 = num1 / num2;
       std:: cout << num4;
       break;
       
       case 3:
       num3 = num1 - num2;
       std:: cout << num3;
       break;
       
       case 4:
       num3 = num1 + num2;
       std:: cout << num3;
       break;
       
       default:
       std:: cout << "Nice Try Buddy";
       break;
   }
}