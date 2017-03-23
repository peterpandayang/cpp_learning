#include <iostream>

// 函数声明 
void func(void);

static int count = 10; /* 全局变量 */

int main()
{
    while(count--)
    {
       func();
    }
    return 0;
}
// 函数定义
void func( void )
{
    static int i = 5; // 局部静态变量
    i++;
    std::cout << "i is " << i ;
    std::cout << " and count is " << count << std::endl;
}