#include <iostream>
using namespace std;

int main() {
  int age, age_ten;
  float ftemp, ctemp;
  cout << "Please enter your age: ";
  cin >> age;
  age_ten = age + 10;
  cout << "In 10 years you will be: " << age_ten << " years old\n";
  cout << "Enter the temperature in degrees Fahrenheit: ";
  cin >> ftemp;
  ctemp = ((ftemp - 32) * 5 / 9);
  cout << "The temperature in degrees celsius is: " << ctemp << "\n";

  return 0;
}
