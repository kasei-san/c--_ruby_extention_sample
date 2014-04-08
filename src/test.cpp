#include <test.h>
#include <iostream>

Test::Test(){ std::cout << "call constructor" << std::endl; }
Test::~Test(){ std::cout << "calll destructor" << std::endl; }
void Test::sample_method(){ std::cout << "call sample_method" << std::endl; }

/* 動作確認用 */
int main(){
  Test* test = new Test();
  test->sample_method();
  delete test;
}
