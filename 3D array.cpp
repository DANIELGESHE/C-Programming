// A 3D array to print the values in a [2][3][3] matrix
#include <iostream>
using namespace std;
int main()
{
    // declardation and initialisation 
    //the array stores 18 values
    int a[2][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
                    {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}}};

    // printing array using the nested for loop
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                cout << "a[" << i << "][" << j << "][" << k << "]: " << a[i][j][k] << endl;
            }
        }
    }

    return 0;
}