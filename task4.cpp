#include <iostream>
using namespace std;
main()
{
 int hours;
 int hours2;
 int hours3;
 int days;
 int days1;
 float holiday;
 int workers;
 cout<<" Enter hours needed ";
 cin>>hours;
 cout<<" Enter days which company has: ";
 cin>>days;
 holiday=days*0.1;
 days1=days-holiday;
 cout<<" Enter number of workers firm has: ";
 cin>>workers;
 hours2=workers*10*days1;
 hours3=hours2-hours;
 if (hours2>hours)
 {
  cout<<" Yes! "<<hours3<<" hours left "<<endl;
 }
  if (hours2<hours)
 {
  cout<<" Not enough hours! "<<-hours3<<" more hours needed "<<endl;
 }
}


 