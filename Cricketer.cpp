#include<iostream>
#include<string.h>
using namespace std;
class batsman
{
	int bcode;
	char bname[100];
	int innings,notout,runs;
	int batavg;
	void calcavg()
	{
		batavg=runs/(innings-notout);
	}
public :
	void readdata ();
	void displaydata();
};
void batsman::readdata ()
{
	cout<<"Enter batsman code \n";
	cin>> bcode;
	cout<<"Enter batsman name \n";
    gets(bname);
	cout<<"enter innings \n";
	cin>>innings;
    cout<<"enter notout \n";
	cin>>notout;
    cout<<"enter runs \n";
	cin>>runs;
	calcavg();
}
void batsman::displaydata()
{
	cout<<"Batsman code "<<bcode<<"\nBatsman name "<<bname<<"\nInnings "<<innings
	<<"\nNot out "<<notout<<"\nRuns "<<runs<<"\nBatting Average "<<batavg;
}
int main()
{
	batsman obj;
	obj.readdata();
	obj.displaydata();
	return 0;
}
