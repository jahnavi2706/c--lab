#include<iostream>
using namespace std;
class triangle{
	private:
		int base;
		int height;
		public:
			void read(){
				cout<<"enter the base of the triangle"<<endl;
				cin>>base;
				cout<<"enter the height of the triangle"<<endl;
				cin>>height;
			}
			float area(int b,int h){
				b = base;
				h = height;
				return (0.5*b*h);
			}
};
int main(){
	float res;
	triangle *ptr,T;
	ptr = &T;
	ptr -> read();
	res = ptr->area(5,12);
	cout<<"area of triangle is:"<<res<<endl;
	return 0;
}
