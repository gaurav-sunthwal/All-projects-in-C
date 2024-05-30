#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    char ty = "a";
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j < n)
        {
            cout << ty;
            j = j + 1;
        }
    }
    return 0;
}
