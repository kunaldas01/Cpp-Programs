// Basics of bit manipulation
#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
    // return (n >> pos) & 1;
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}

int updateBit(int n, int pos, int value)
{
    // clear bit
    int mask = ~(1 << pos);
    n = n & mask;

    // set Bit
    return (n | (value << pos));
}

int toggleBit(int n, int pos)
{
    return (n xor (1 << pos));
}

int main()
{
    int n, pos;
    int value;
    cin >> n >> pos;
    cin >> value;
    // cout << getBit(n, pos) << endl;
    // cout << setBit(n, pos) << endl;
    // cout << clearBit(n, pos) << endl;
    cout << updateBit(n, pos, value) << endl;
    // cout << toggleBit(n, pos) << endl;
    return 0;
}
