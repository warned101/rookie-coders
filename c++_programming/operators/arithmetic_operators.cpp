//C++ programs to know operators
#include<iostream>
using namespace std;
int main()
{
	int a=123;
	int b=256;
	int c,d;
	c=a+b;//'+' is an add operator and a,b are operands
	
	//arithmetic operators are used to perform mathematical operations 
	a=a++;//unary operators works with single operand
	b=b+a;//binary operators works with two operands 


	//binary operators in depth
	std::cout<<"binary operators"<<endl;
	d=a+b;//performs addition operation 
	std::cout<<" addition of two operators="<<d<<endl;
	d=a-b;//performs subtraction operation
	std::cout<<" subtraction of two operators="<<d<<endl;
	d=a*b;//performs multiplication operation
	std::cout<<" multiplication of two operators="<<d<<endl;
	d=a/b;//performs division operation
	std::cout<<" division of two operators="<<d<<endl;
	d=b%a;//performs modulus operation by giving d the reminder 
	std::cout<<" modulus of two operator="<<d<<endl;

	//unary operators in depth
	std::cout<<"unary operators"<<endl;
	std::cout<<"\033[1;32m%s\033[0m<<"<<"post post-increment"<<(a++)<<endl;//post-increment, the value of 'a' (which is initially 123) will be printed and then the value is incremented to 124
	std::cout<<" pre-increment="<<(++a)<<endl;//pre-increment, the value of 'a' (which is initially 124) will increment first then get printed i.e 125
	std::cout<<" post-decrement="<<(a--)<<endl;//post-decrement, the value of 'a' (which is initially 125) will be printed and then the value is decremented to 124
	std::cout<<" pre-decrement="<<(--a)<<endl;//post-decrement, the value of 'a'(which is initially 124) will be decremented first get printed i.e 123
}