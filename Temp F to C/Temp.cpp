#include <iostream>

int main() {
  
  std::cout<<"Fahrenheit to Celsius\n";
  
  double tempf = 0;
  
  
  std::cout<<"Enter the temp in Fahrenheit:";
  std::cin >> tempf;
  
  std::cout<<"\n";
  
  
  
   double tempc = 0;
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
}