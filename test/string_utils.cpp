#include <iostream>
#include "../src/Neutron.hpp"
#include "../src/Neutron.cpp"

int main()
{
    using namespace ntk::Instance;
    using namespace ntk::Utils;
    // 用的是VSCode的文件系统，所以是"run.bat"而不是"../run.bat"
    std::string result = string_utils.load_string_from_file("run.bat");
    std::cout << string_utils.to_string("result:", result) << std::endl;
    std::cout << string_utils.to_string("load_string_from_stream_status:", string_utils.load_string_from_stream_status) << std::endl;
    std::cout << string_utils.to_string("load_string_from_stream_result:", string_utils.load_string_from_stream_result) << std::endl;
    std::cout << string_utils.to_string("load_string_from_file_status:", string_utils.load_string_from_file_status) << std::endl;
    std::cout << string_utils.to_string("load_string_from_file_result:", string_utils.load_string_from_file_result) << std::endl;
    return 0;
}