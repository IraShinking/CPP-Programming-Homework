#include <iostream>
#include <sstream>
#include <cmath>
#include <cassert>
#include "Calculator.h"//用VS2019 编译的时候一定要写成cpp不然就找不到文件报错 但如果有模板的头文件和cpp分开又报错
using namespace std;


int main()
{
    Calculator c;
    c.run();
    return 0;
}
