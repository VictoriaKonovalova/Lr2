#include <iostream>

using namespace std;

int main()
{
    int i, m[10]; 

    for (i = 0; i < 10; i++) 
    {
        cin >> m[i]; // 
    }

    for (i = 0; i < 10; i++)
    {
        cout << "m[" << i << "]= " << m[i] << "\n"; //   выводятся все элементы массива
    }

    system("pause");
    return 0;
}
