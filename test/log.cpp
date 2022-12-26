#include <iostream>
#include <ctime>
#include "../src/Neutron.hpp"
#include "../src/Neutron.cpp"

int main()
{
    /*time_t now = time(nullptr);
    tm *t = localtime(&now);
    std::cout << asctime(t) << std::endl;*/
    ntk::Instance::log.logi("title1", "content1");
    ntk::Instance::log.set_auto_output(false);
    ntk::Instance::log.logi("title2", "content2");
    ntk::Instance::log.output_all();
    return 0;
}