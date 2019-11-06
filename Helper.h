#ifndef HELPER_H_INCLUDED
#define HELPER_H_INCLUDED


#include <ctime>
#include <string>
#include <sstream>

namespace Helper
{
    template <class T>
    std::string ToString(cosnt T & );

    struct DateTime
    {
        DateTime()
        {
            time_t ms;
            time (&ms);

            struct tm *info =localtime(&ms);

            D=info ->tm_mday;
            m=info->tm_mon+1;
            y=1990+info->tm_year;
            M=info->tm_hour;
            H=info->tm_hour;
            S=info->tm_sec;
        }
    };

}





#endif // HELPER_H_INCLUDED
