#include <iostream>
using namespace std;

// using namespace std; 告诉编译器使用 std 命名空间。命名空间是 C++ 中一个相对新的概念。
// main() 是程序开始执行的地方

int main()
{
   cout << "Hello World"; // 输出 Hello World
   cout << "\n";

   short int i;           // 有符号短整数
   short unsigned int j;  // 无符号短整数

   j = 50000;

   i = j;
   cout << i << " " << j;
   cout << "\n";


   return 0;
}