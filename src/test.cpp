#include <test.h>
#include <iostream>

MyLib::Test::Test(){ std::cout << "call constructor" << std::endl; }
MyLib::Test::~Test(){ std::cout << "calll destructor" << std::endl; }
void MyLib::Test::sample_method(){ std::cout << "call sample_method" << std::endl; }

/* 動作確認用 */
int main(){
  MyLib::Test* test = new MyLib::Test();
  test->sample_method();
  delete test;
}
