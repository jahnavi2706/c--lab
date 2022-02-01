#include<iostream>
using namespace std;
class sample
{
	public:
		int a=200;
		int b=800;
	void add()
	{
		cout<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
		cout<<"a+b ="<<a+b<<endl;
	}};
int main()
{
	sample *obj;
	obj = new sample;
	obj->add();
	delete obj;
	return 0;
}
