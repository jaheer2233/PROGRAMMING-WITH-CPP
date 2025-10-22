#include<iostream>
using namespace std;
//class for complex numbers
class complex{
	private:
		int real,img;
		public:
			//constroucter
			complex(int r =0,int i=0){
				real = r;
				img = i;
			}
			//operator overloading for +
			complex operator +(complex obj)
			{
				complex temp;
				temp.real = real + obj.real;
				temp.img = img + obj.img;
				return temp;
				//display function
			}
			void display(){
				cout <<real<<" + "<<img<<" i "<<endl;
			}
			
};
//main function
int main()
{
	complex c1(3,4);   //3+4i
	
	complex c2(5,6);   //5+6i
	
	complex c3 = c1 + c2;  //calls over loaded function
	
	cout<<"first complex number:";
	c1.display();
	cout<<"second complex number";
	c2.display();
	cout<<"sum of complex number";
	c3.display();
	return 0;
	
}
