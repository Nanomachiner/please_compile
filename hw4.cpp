#include <iostream>
#include <cstdlib>

using namespace std;

void hanoi(int num_disks, int src, int aux, int dest)
{
    // if ndisks == 0, just return. There are no more, so nothing is printed.
    if (num_disks == 0) return; 
    
    // move num_disks - 1 disks from src to dest.

    hanoi (num_disks - 1, src, dest, aux);
    hanoi (num_disks - 1, aux, src, dest);
    
    //hanoi(1, src,dest,aux);
    //hanoi(1, aux,src,dest);
    cout << src << " to " << dest << endl;

    // move one disk from src to aux.
    
    
    // move num_disks - 1 disks from dest to src.
    
    
    // move one disk from aux to dest.
    
    
    // move num_disks - 1 disks from src to dest.
    

    return;
}

int main()
{
    int num_disks;
    // Read number of disks from the user.
    
    cout << "enter number of disks: ";
    cin >> num_disks;
    hanoi(num_disks, 1,2,3);
    
    // Call hanoi to print the required moves to solve the problem.

    return EXIT_SUCCESS;
}