#include <iostream>
#include <math.h>
using namespace std;
 
// Class calculator
class Calculator
{
   float a, b;
public:
   
    // Function to take input
    // from user
    void result()
    {
        cout << "Enter First Number: ";   
        cin >> a;
        cout << "Enter Second Number: ";  
        cin >> b;
    }
   
    // Function to add two numbers
    float add()
    {
        return a + b;
    }
   
    // Function to subtract two numbers
    float sub()
    {
        return a - b;
    }
   
    // Function to multiply two numbers
    float mul()
    {
        return a * b;
    }
   
    // Function to divide two numbers
    float div()
    {
       
        return a / b;
        
    }
};
 
// Driver code
int main()
{
    class Calculator c1;
    c1.result();
    c1.add();
     
    return 0;
}