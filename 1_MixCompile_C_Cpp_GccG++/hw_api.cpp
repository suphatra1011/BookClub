#include <iostream>

extern "C" void HW_Msg(void);

void HW_Msg()
{
    std::cout << "Hello, world!" << std::endl;
}
