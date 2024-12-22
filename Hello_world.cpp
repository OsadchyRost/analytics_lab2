#include <iostream>
using namespace std;
int main(){
    //Переменная для имени пользователя
    std::string name;
    //Вводим имя пользователя
    std::cout << "Enter your name" << endl;
    std::cin >> name
    //Выводим приветствие и имя пользователя
    std::cout << "Hello world from " << name << "!" << endl;
    return 0;
}