#include <iostream>
using namespace std;
float final_price(int,char);
main()
{
 int item_price;
 char ans;
 float price;
 float tax;
 cout<<" Enter price of item: ";
 cin>>item_price;
 cout<<" Enter code of item: ";
 cin>>ans;
 tax =final_price(item_price,ans);
 price= tax + item_price;
 cout<<" Final price of item of code "<<ans<<" after adding tax is "<<price;
}
float final_price(int item_price,char ans) 
{
 if (ans=='M')
{
 float tax;
 tax = item_price * ( 0.06/100);
 return tax;
}
 if (ans=='E')
{
 float tax;
 tax = item_price * ( 0.08/100);
 return tax;
}
 if (ans=='S')
{
 float tax;
 tax = item_price * ( 0.1/100);
 return tax;
}
 if (ans=='V')
{
 float tax;
 tax = item_price * ( 0.12/100);
 return tax;
}
 if (ans=='T')
{
 float tax;
 tax = item_price * ( 0.15/100);
 return tax;
}
}
 