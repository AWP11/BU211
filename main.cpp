
#include <iostream>

int main(){
  setlocale(LC_ALL,"");
    int a = 0;
    int b = 0;
    char operation;
    std::cout << "������� 1 ��������: ";
    std::cin >> a;
    std::cout << "������� 2� ��������: ";
    std::cin >> b;
    std::cout << "�������� + - / *: ";
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
