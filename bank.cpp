#include<iostream>
#include<string.h>
using namespace std;
class Bank{
    int Ac_no;
    char name[50],Ac_type[50];
    float Balance;
    public :
    Bank(int Ac_no,char *name1,char *Ac_type1,float Balance){      //Here use String copy function for the Display
        this->Ac_no=Ac_no;
        strcpy(name,name1);
        this->Balance=Balance;
        strcpy(Ac_type,Ac_type1);
    }
    void deposit();
    void withdraw();
    void display();
};
void Bank::deposit()
{
    int Deposit;
    cout<<"\nEnter the Deposit Ammount : ";
    cin>>Deposit;
    Balance+=Deposit;
}
void Bank::withdraw()
{
    int Withdraw;
    cout<<"\nEnter The Withdraw Ammount : ";
    cin>>Withdraw;
    if (Withdraw>Balance){
    
      cout<<"\n..................."<<endl;
      cout<<"Insuffient Balance"<<endl;
    } 
}
void Bank::display()
{
    cout<<"\n_________Transaction Information_________"<<endl;
    cout<<"\nAccount Number :"<<Ac_no<<endl;
    cout<<"\nAccount Holder Name :"<<name<<endl;
    cout<<"\nAccount type :"<<Ac_type<<endl;
    cout<<"\nAccount Balance :"<<Balance<<endl;
}
int main()
{
    int Ac_no;
    char name[50],Ac_typ[50];
    int Balance;
    cout<<"\n  Enter Your Bank Details  "<<endl;
    cout<<"\nEnter Account Number :"<<endl;
    cin>>Ac_no;
    cout<<"\nEnter Account Holder Name :"<<endl;
    cin>>name;
    cout<<"\nEnter Account Type :"<<endl;
    cin>>Ac_typ;
    cout<<"\nEnter Account Balance :"<<endl;
    cin>>Balance;
    
    Bank b1(Ac_no,name,Ac_typ,Balance);
    b1.deposit();
    b1.display();
    b1.withdraw();
    return 0;

}