#include <iostream>
using namespace std;
int main()
{

int hours; 
float wage; 
float weekly_pay;
float extra;

cout<<"\n enter the number of hours worked: ";
cin>>hours;
cout<<"\n enter the hourly wate: ";
cin>>wage;
extra=0;

if( hours>40)

{
extra=((hours-40)*(0.5*wage));
}
 
weekly_pay=((hours*wage)+extra);
 
cout<<"\n the weekly pay of the employee is: "<<weekly_pay<<"\n";

return 0;
}