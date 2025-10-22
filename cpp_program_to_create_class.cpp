#include<iostream>
using namespace std;

//class defination
class student {
	private:
		string name;
		int age;
	public:
	//memeber function to set values
	void setdetails(string n,int a){
		name = n;
		age = a;
		
	}	
	// member function to display values
	void displaydetails(){
		cout<<"student name:"<<name<<endl;
		cout<<"student age:"<<age<<endl;
		
	}
	
};
int main()
{
	student s1;//create object
	//using member function to set details 
	s1.setdetails("teja",19);
	//using member function to dispa]lay details
	s1.displaydetails();
	return 0;
	
}
