#include <iostream>
using namespace std;

//ДЗ№1
//int main() {
  //setlocale(0, "RUS");
  
  //double first_num;
  //double second_num;
  //double third_num;
  
  //cout << "Введите первую цифру:";
  //cin >> first_num;
  //cout << first_num << "\n";
  
  //cout << "Введите вторую цифру:";
  //cin >> second_num;
  //cout << second_num << "\n";
  
  //cout << "Введите третью цифру:";
  //cin >> third_num;
  //cout << third_num << "\n";
  
  //cout << "Среднее арифметическое:\n";
  //double AVERAGE = 3.0;
  //cout << (first_num + second_num + third_num) / AVERAGE;
//}




//ДЗ№2
//int main() {
//int a;
//int b;
//int x;
//setlocale(0, "RUS");

//cout << "Введите значение a:\n";
//cin >> a;

//cout << "Введите значение b:\n";
//cin >> b;

//x = -b/a;
//cout << "Корень уравнения равен:" << x;
//}



//ДЗ№3
//#include <cmath>
//int main() {

//int number;
//int degree;
//setlocale(0, "RUS");

//cout << "Введите любое число:\n";
//cin >> number;

//cout << "Введите степень:\n";
//cin >> degree;

//cout << "Число возведённое в указанную степень:" << pow(number,degree);
//}






//ДЗ№4
//int main() {
//setlocale(0, "RUS");

//const double PI = 3.1415;

//double radius;

//cout << "Введите радиус окружности:\n";
//cin >> radius;

//double area = PI * radius * radius;
//double length = 2 * PI * radius;

//cout << "Площадь окружности:" << area << "\n";
//cout << "Длина окружности:" << length;
//}




//ДЗ№5
//int main() {

//setlocale(0, "RUS");
//const double USD = 0.027;
//const double EUR = 0.025;
//const double BTC = 9.4e-7;

//double UAH;

//cout << "Введите количество гривен:\n";
//cin >> UAH;

//cout << "Доллары:" << UAH * USD << "\n";
//cout << "Евро:" << UAH * EUR << "\n";
//cout << "Биткоины:" << UAH * BTC << "\n";
//}





//ДЗ№6
//int main() {
//setlocale(0, "RUS");

//const double LAND_MILE = 0.621371;
//const double SEA_MILE = 0.539957;

//double kilometers;

//cout << "Введите количество километров:\n";
//cin >> kilometers;

//cout << "Сухопутная Миль:" << kilometers * LAND_MILE << "\n";
//cout << "Морская Миль:" << kilometers * SEA_MILE << "\n";
//}





//ДЗ№8
//int main() {
//setlocale(0, "RUS");

//double C;
//cout << "Введите градусы по Цельсию:\n";
//cin >> C;

//cout << "Фаренгейты:" << (C * 9/5) + 32 << "\n";
//cout << "Кельвины:" << C + 273.15 << "\n";
//cout << "Реомюры:" << C * 4/5 << "\n";
//cout << "Делили:" << (100 - C) * 3 / 2 << "\n";
//cout << "Из Фаренгейт в Цельсии:" << (C - 32) * 5 / 9 << "\n";
//}





//ДЗ№9
//int main() {

//int A;
//int B;
//int C;

//cout << "Введите любую цифру:";
//cin >> A;
//cout << "Введите вторую любую цифру:";
//cin >> B;
//cout << A << "\n";
//cout << B << "\n\n\n";  

//Первый Способ
//C = A;
//A = B;
//B = C;
//cout << A << "\n";
//cout << B << "\n";
//Второй Способ
//A = A ^ B;
//B = A ^ B;
//A = A ^ B;

//cout << A << "\n";
//cout << B << "\n"; 
//}