// Hoppock, Zachary
// sumFunction.cpp
// Calculate the sum of three inputted numbers by doing it inside a function
// Version # 1

#include <iostream>
using namespace std;

/**
Calculates the sum of three inputted numbers
@return the sum of the three numbers
*/

double sum_num()
{
  int num1;
  int num2;
  int num3;
  cout << "What is the first number to be added?" << endl;
  cin >> num1;
  cout << "What is the second number to be added?" << endl;
  cin >> num2;
  cout << "What is the third number to be added?" << endl;
  cin >> num3;
  int sum = num1 + num2 + num3;
  return sum;
}

int main()
{
  int sum = sum_num();
  cout << "The sum of the three numbers is " << sum;
  return 0;
}