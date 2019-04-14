#include <iostream>
using namespace std;

int seq(int n)
{
    if (n == 1) return 1;
    if (n == 2) return 1;
    if (n == 3) return 2;
    
    return 2*seq(n - 1) + 3*seq(n - 2) + seq (n - 3);
}

void hanoi (int n, int src, int aux, int dest)
{
    if (n == 0) return;
    hanoi (n - 1, src, dest, aux);
    cout << src << " to " << dest << endl;
    hanoi (n - 1, aux, src, dest);
}

int main()
{
    int n;
    cout << seq(10) << endl;
    
    cout << "enter number of disks: ";
    cin >> n;
    hanoi(n, 1,2,3);
    // 2^n - 1 moves to complete for n number of disks
    return 0;
}