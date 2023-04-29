#include "function.h"

namespace func_r
{
    // функция получения текущего unix-времени
    short get_Tt_nowunix(time_t& nowunix_Tt){
        nowunix_Tt = time(NULL);
        return 0;
    }

}
