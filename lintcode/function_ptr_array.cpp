#include <iostream>
using namespace std;

void function0(int);
void function1(int);
void function2(int);

int _tmain(int argc, _TCHAR* argv[])
{
 void (*f[3])(int) = {function0,function1,function2};  //将这3个函数指针保存在数组f中

 int choice;

 cout << "Enter a number between 0 and 2,3 to end: ";
 cin >> choice;

 //处理用户的选择
 while ((choice >= 0) && (choice <3))
 {
  //调用数组f中的一个函数
  (*f[choice])(choice);   //f[choice]选择在数组中位置为choice的指针。
                         //指针被解除引用，以调用函数，并且choice作为实参传递给这个函数。
  cout << "Enter a number between 0 and 2,3 to end: ";
  cin >> choice;
 }

 cout << "Program execution completed." << endl;
 system("pause");
 return 0;
}

void function0(int a)
{
 cout << "You entered" << a << " so function0 was called\n\n";
}

void function1(int b)
{
 cout << "You entered" << b << " so function0 was called\n\n";
}

void function2(int c)
{
 cout << "You entered" << c << " so function0 was called\n\n";
}
