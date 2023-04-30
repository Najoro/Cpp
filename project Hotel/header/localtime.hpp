#ifndef LOCALTIME_H
    #define LOCALTIME_H
    #include <iostream>
    #include <string>
    #include <ctime>

    class LocalTime
    {
        private:
            int _date = 0;
        public:
            LocalTime();
            LocalTime(int date);
            void setLocalTime(int date);
            int getLocalTime();
    };
#endif //LOCALTIME_H
