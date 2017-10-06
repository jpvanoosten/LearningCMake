#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Testing 123..." << std::endl;

    for (int i = 0; i < argc; ++i)
    {
        std::cout << argv[i] << std::endl;
    }

    system("PAUSE");
    return 0;
}