#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<" in default of a\n";
			
		}
		void display()
		{
			cout<"in display of A class\n";
		}
};
class B : public A
{
	public:
		B()
		{
			cout<<"in default of B\n";
			
		}
		void display()
		{
			cout<<"in display of B\n";
			
		}
};
int main()
{
	B bobj;
	bobj.display();
}
