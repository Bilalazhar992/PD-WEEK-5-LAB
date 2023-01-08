#include <iostream>
using namespace std;
float volume(int,int,int,string);
main()
{	
	int length,width,height;
	string unit;
	cout<<" Enter length of pyramid in meter: ";
 	cin>>length;
	cout<<" Enter width of pyramid in meter: ";
 	cin>>width;
 	cout<<" Enter height of pyramid in meter: ";
 	cin>>height;
	cout<<" Enter unit in which volume should be calculated: ";
	cin>>unit;
	volume(length,width,height,unit);
    cout<<" Volume of pyramid= "<<volume(length,width,height,unit) << unit;
}
float volume(int length,int width,int height,string unit)
{
    float result;
    int a;
    if (unit=="cubiccentimeter")
    {
    a=(length*width*height);
    result=a/3;
    result=result*100;
    return result;
    }
    if (unit=="cubicmillimeter")
    {
    a=(length*width*height);
    result=a/3;
    result=result*100*10;
    return result;
    }
     if (unit=="cubickilometer")
    {
      a=(length*width*height);
      result=a/3;
      result=result/1000;
      return result;  
    }
}