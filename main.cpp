#include <iostream>
#include "objects.h"
#include "function.h"

using namespace std;

int main()
{
    setlocale (LC_ALL, "Rus");
    cout << "hello world" << endl;
    // ���� for
    for (int index_Int = 0; index_Int < 5; index_Int++){
        cout << "hello world cycle" << endl;
        // comment.
    }
    time_t nowunix_Tt = 0;
    short errmsg = func_r::get_Tt_nowunix(nowunix_Tt);
    cout << "������ " << errmsg << " : "<<"����� ����� " << nowunix_Tt << endl;

    system("pause");
    return 0;
}
