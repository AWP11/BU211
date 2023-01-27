
#include <iostream>

int main(){
  setlocale(LC_ALL,"");
    int a = 0;
    int b = 0;
    char operation;
    std::cout << "введите 1 значение: ";
    std::cin >> a;
    std::cout << "введите 2е значение: ";
    std::cin >> b;
    std::cout << "оператор + - / *: ";
    std::cin >> operation;

    switch (operation){
    case '-':
        std::cout << "a - b = " << a - b <<'\n';
        break;
    case '+':
        std::cout << "a + b = " << a + b << '\n';
        break;
    case '*':
        std::cout << "a * b = " << a * b << '\n';
        break;
    case '/':
        std::cout << "a / b = " << a / b << '\n';
        break;
    default:
        std::cout << "Error\n";
    }
    return 0;
}
