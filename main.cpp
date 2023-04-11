#include <iostream>
#include "objects.h"
#include "function.h"

using namespace std;

int main()
{
    setlocale (LC_ALL, "Rus");
    cout << "hello world" << endl;
    // цикл for
    for (int index_Int = 0; index_Int < 10; index_Int++){
        cout << "hello world cycle" << endl;
    }

    system("pause");
    return 0;
}
