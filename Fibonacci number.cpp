#include<iostream>
using namespace std;
int main()
{
   int n = 30;
   int a = 0, b = 1,c;

   cout<<"Fibonacci series:  ";

   for(int i = 1;i <=n;i = i+1)
   {
      cout<< a <<" , ";
      c = a + b;
      a = b;
      b = c;


   }

      return 0;




}