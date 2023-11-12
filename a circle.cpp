/* area and circumference of a circle program */
#include<iostream>
using namespace std;
#define pi 22/7//define constant pi 22/7

//class definition
class circle

{
	//declare data members
	private:
		int radius,area,circumference;
		
		//declare data fuctions
		public:
			int input();
			int compute();
			int output();
};
//define member fuctions
int circle::input()
{
	cout<<"/n input the radius";
	cin>>radius;
}
int  circle::compute()
{
	area=radius*radius*pi;
	circumference=2*radius*pi;
}
int circle::output()
{
	cout<<"/n area:"<<area;
	cout<<"/n circumference:"<<circumference;
}
int main()
{
	//create three objects
	circle a,b,c;
	
	//input for each
	a.input ();
	b.input ();
	c.input();
	
	//compute for each
	a.compute ();
	b.compute ();
	c.compute();
	
	//output for each
	a.output();
	b.output();
	c.output();
	return 0;
}
