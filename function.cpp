#include "function.h"

namespace func_r
{
    // ������� ��������� �������� unix-�������
    short get_Tt_nowunix(time_t& nowunix_Tt){
        nowunix_Tt = time(NULL);
        return 0;
    }

}
