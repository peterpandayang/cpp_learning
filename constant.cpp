#include <iostream>
using namespace std;

#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

int main()
{

   int area;  

   area = LENGTH * WIDTH;
   cout << area;
   cout << NEWLINE;

   // const part
   const int  LENGTH2 = 10;
   const int  WIDTH2  = 5;
   const char NEWLINE2 = '\n';
   int area2;  

   area2 = LENGTH2 * WIDTH2;
   cout << area2;
   cout << NEWLINE2;

   return 0;
}