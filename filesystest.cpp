#include <iostream>
#include <experimental/filesystem>

namespace std::experimental::filesystem::v1;

int main()
{
    std::cout << "Current path is " << fs::current_path() << '\n';
}