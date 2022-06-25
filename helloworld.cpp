#include <iostream>
#include <vector>
#include <string>


int main()
{
    std::vector<std::string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    for(auto wrd: msg)
    {
        std::cout << wrd << " ";
    }
    std::cout << std::endl;
}