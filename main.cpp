#include <iostream>
#include <cstdio>
#include <cmath>

void func1( ){

    std::cout << "Task 1" << std::endl;
    float rad, grad, min, sec;

    // ввод данных в радианах
    std::cout << "rad: ";
    std::cin >> rad;

    // перевод радиан в градусы, минуты, секунды
    grad = rad * 180 / M_PI;
    min = grad * 60;
    sec = min * 60;

    // вывод градусов, минут, секунд
    std::cout << "grad = " << grad << " min = " << min << " sec = " << sec << std::endl;
}

void func2() {
    std::cout << "Task 2" << std::endl;
    float a, b, c;

    std::cout << "a =";
    std::cin >> a;
    std::cout << "b =";
    std::cin >> b;
    std::cout << "c =";
    std::cin >> c;

    if ((c*c < (a*a + b*b)) && (a*a < (b*b + c*c)) && (b*b < (c*c + a*a)))
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
}

int main(){

    func1();
    func2();
};