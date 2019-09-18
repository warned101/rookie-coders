// C++ program to know primitive data types.
//Primitive types are the most basic data types available within the C++ language.
#include<iostream> 

using namespace std; 
  
int main() { 
  char ch[] = "ab"; //Learn more about char at 
  cout << "Size of char " << ch << " is "  << sizeof(char) << " byte" << endl; 

  int num = 73567; //Learn more about integer at https://www.geeksforgeeks.org/c-data-types/
  cout << "Size of int " << num << " is " << sizeof(int) << " bytes" << endl; 

  short int num2 = 46; //Learn more about short integer at https://www.geeksforgeeks.org/c-data-types/
  cout << "Size of short int " << num2  << " is " << sizeof(short int) << " bytes" << endl; 

  long int num3 = 3672939; //Learm more about long integer at https://www.geeksforgeeks.org/c-data-types/
  cout << "Size of long int " << num3 << " is " << sizeof(long int) << " bytes" << endl; 

  signed long int num4 = 327218; //Learn more about signed variables at https://www.quora.com/What-is-the-difference-between-signed-and-unsigned-data-types
  cout << "Size of signed long int " << num4 << " is " << sizeof(signed long int) << " bytes" << endl; 

  unsigned long int num5 = 33442844; //Learn more about unsigned variables at https://www.quora.com/What-is-the-difference-between-signed-and-unsigned-data-types
  cout << "Size of unsigned long int " << num5 << "i s " << sizeof(unsigned long int) << " bytes" << endl; 

  float num6 = 456.57; //Learn more about float at https://www.geeksforgeeks.org/difference-float-double-c-cpp/
  cout << "Size of float " << num6 << " is " << sizeof(float) << " bytes" <<endl; 

  double num7 = 342.4799; //Learn more about double at https://www.geeksforgeeks.org/difference-float-double-c-cpp/
  cout << "Size of double " << num7 << " is " << sizeof(double) << " bytes" << endl; 

  wchar_t wch[] = L"abc"; //Learn more about wchar at https://www.geeksforgeeks.org/wide-char-and-library-functions-in-c/
  cout << "Size of wchar_t " << wch << " is " << sizeof(wchar_t) << " bytes" <<endl; 
      
  return 0; 
} 
