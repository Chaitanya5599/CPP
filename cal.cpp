#include <iostream>
using namespace std;
 
class Calculator
{
   float a, b;
public:
  
    void result()
    {
        cout << "Enter First Number: ";   
        cin >> a;
        cout << "Enter Second Number: ";  
        cin >> b;
    }
   
   
    float add()
    {
        cout<<"The addition of both value is  "<<a+b<<endl;
        return a+b;
    }
   
    
    float sub()
    {
        cout<<"The subtraction of both value is  "<<a-b<<endl;
        return a-b;
    }
   
    
    float mul()
    {
        cout<<"The Multiplication of both value is  "<<a*b<<endl;
        return a*b ;
    }
   
    
    float div()
    {
       
        cout<<"The division of both value is  "<<a/b<<endl;
        return a/b;
        
    }
};
 

int main()
{
    class Calculator c1;
    c1.result();
    c1.add();
    c1.sub();
    c1.mul();
    c1.div();
        

    

    

     
    return 0;
}
