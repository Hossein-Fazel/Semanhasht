#include "Time.hpp"

Time::Time(string get_time)
{
    string minute = "", hour = "", noon = "";
    char dot = ':';
    for(int i = 0; i < get_time.size() - 3; i++)
    {
        if(get_time[i] == dot)
        {
            for(int j=i+1 ; j<get_time.size() ; j++) 
            {
                minute += get_time[j] ;
            }

        }
        hour+=get_time[i] ;
    }
    noon += get_time[get_time.size()-2] + get_time[get_time.size()-1];

    set_noon(noon);
    set_hour(stoi(hour));
    set_minute(stoi(minute));
}

void Time::set_hour(int h)
{
    if( h > 12 and h < 0)
    {
        throw invalid_argument("Invalid time(hour) value"); 
    }
    else
    {
        hour = h;
    }
}

void Time::set_minute(int m)
{
    if( m > 60 and m < 0)
    {
        throw invalid_argument("Invalid time(minute) value"); 
    }
    else
    {
        minute = m;
    }
}

void Time::set_noon(string noon)
{
    if(noon != "AM" and noon != "PM")
    {
        throw invalid_argument("Invalid time(minute) value"); 
    }
    else
    {
        noon = noon;
    }
}

void Time::print()
{
    cout << hour;
    if(minute != 0)
    {
        cout << ':' << minute;
    }
    cout << noon << endl;
}

Time Time::operator+=(int min)
{
    minute += min;
    if(minute >= 60)
    {
        minute -= 60;
        hour++;
    }
    return *this;
}