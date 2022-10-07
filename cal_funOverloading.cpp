#include <iostream>
using namespace std;
class FunctionOverloading
{
public:
  int calculation(int a, int b, int k) /*addition of two numbers*/
  {
    cout << "The sum is = " << a + b + k << endl;
  }
  int calculation(int c, int d) /*Multiplication of two numbers*/
  {
    cout << "Multiplication is = " << c * d << endl;
  }
};
int main()
{
  FunctionOverloading obj1;
  obj1.calculation(5, 6, 7);
  obj1.calculation(2, 4);
  
  return 0;
}