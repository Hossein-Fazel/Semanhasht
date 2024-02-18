#include <iostream>
#include <fstream>
#include "vehicle.hpp"

using namespace std;

machine::machine(string file_name)
{
    ifstream read_vehicle('v' + file_name + ".txt");

    read_vehicle >> speed;
    read_vehicle >> traffic_speed;
    
    read_vehicle >> line_price;
    read_vehicle >> traffic_price;

    read_vehicle >> get_in;
    read_vehicle >> traffic_get_in;

    read_vehicle >> start_traffic_time;
    read_vehicle >> end_traffic_time;
}

int machine::get_in_time(Time t1)
{
    if( t1.get_hour() >= 6 and t1.get_hour() <= 8 ) // check the noon later because traffic time for taxi is different.
    {
        return traffic_get_in ;
    }
    else
    {
        return get_in ;
    }
}

int machine::get_path_time(Time t1)
{
    if( t1.get_hour() >= 6 and t1.get_hour() <= 8 )
    {
        return speed ;
    }
    else
    {
        return traffic_speed ;
    }
}