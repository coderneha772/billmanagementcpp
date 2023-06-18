#include <iostream>
#include <conio.h>
using namespace std;
class EleBill
{
private:
    int cur_Unit,pre_Unit,amt,unit;
//variable drclaration
public://function declaration as public
    void get();
    void printAmt();
};
void EleBill::get()//function definition
{
    cout << "Enter previous unit:" << endl;
    cin>>pre_Unit;//takes input from the user
     cout << "Enter current unit:" << endl;
    cin>>cur_Unit;//takes input from the user
}
/*1  -  100  = 1
101  -  200  = 2
201  -  300  = 3
above  300  -  5*/


void EleBill::printAmt()//function definition {
{
    unit=cur_Unit-pre_Unit;
    if(unit>0 && unit<=100)
    {
        amt=unit*1;
    }
    if(unit>100 && unit<=200)
    {
        amt=unit*2;
    }
    if(unit>200 && unit<=300)
    {
        amt=unit*3;
    }
    if(unit>300)
    {
        amt=unit*5;
    }
    cout << "Bill charge: " <<amt <<endl;

}
int main()
{
    EleBill o;

    o.get();
    o.printAmt();
    getch();
    return 0;
}
