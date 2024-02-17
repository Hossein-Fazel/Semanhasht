#ifndef MACHINES
#define MACHINES
#include <iostream>

#include "Time.hpp"

using namespace std;

class machine
{
    public:
        machine(string file_name);
        int get_in_time(Time t1);
        int get_path_time(Time t1);

    private:
        int speed;
        int traffic_speed;

        int line_price;
        int traffic_price;
        
        int get_in;
        int traffic_get_in;

        Time start_traffic_time;
        Time end_traffic_time;

};

#endif