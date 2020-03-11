#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// say hello and ask for numbers!
int main()
{
  int num1, num2 = 0;

  int x,y,z;

  cin >> x >> y;
  cout << x + y << endl;

  int array_a[4];
  int array_b[4];

  int sum_a = 0;

  for (int i = 0; i < 4; i++)
    sum_a += array_a[i];

  int average_a = sum_a / 4;

  int sum_b = 0;

  for (int i = 0; i < 4; i++)
    sum_b += array_b[i];

  int average_b = sum_b / 4;
  return 0;
}
