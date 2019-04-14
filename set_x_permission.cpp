#include <iostream>
#include <cstdlib>
#include <experimental/filesystem>

using namespace std; 
namespace fs = std::experimental::filesystem;

//This script should mirror the effect of set_x_permission.sh, taking a filename
//as an argument, and adding +x executable functionality onto it

//Unfortunately this code requires C++17 filesystem support in order to work
int main(int argc, char* argv[])
{
    path p (argv[1]);
    if (argc == 2)
    {
        if (exists(p))
        {
            if (is_regular_file(p))
            {
                system("chmod 755 p");
            }
            else
            cout << "The file you have provided is not a regular file." << endl;
        }
        else
        cout << "The file you have provided does not exist." << endl;
    }
    else
    cout << "Usage: set_x_permisson.sh [filename]. Exiting..." << endl;
}