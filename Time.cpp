#include "Time.hpp"

Time::Time(string get_time)
{
    string minute = "", hour = "", type = "";
    char dot = ':';
    
    for(int i = 0; i < get_time.size(); i++)
    {
        if(get_time[i] == dot)
        {
            for(int j=i+1 ; j<get_time.size()-2 ; j++) 
            {
                minute += get_time[j] ;
            }
            break;
        }
        hour+=get_time[i] ;
    }
    type = type + get_time[get_time.size()-2] + get_time[get_time.size()-1];
    //cout << "type ;" << type ;
    //cout << "hour ;"<< hour <<"min ;" << minute ;
     int sto_h = stoi(hour) ;
     int sto_m = stoi(minute) ;
    set_hour(sto_h);
    set_minute(sto_m);
    set_noon(type);
}

void Time::set_hour(int h)
{
    if( h > 12 || h < 0)
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
    if( m > 60 || m < 0)
    {
        throw invalid_argument("Invalid time(minute) value"); 
    }
    else
    {
        minute = m;
    }
}

void Time::set_noon(string type)
{
    
    if(type == "am" or type == "AM" or type == "pm" or type == "PM")
    {
        noon = type;
    }
    else
    {
        throw invalid_argument("Invalid time(noon) value"); 
    }
}

void Time::print()
{
    cout << hour;
    if(minute != 0)
    {
        cout << ':' << minute << " ";
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
        if(hour == 12)
        {
            if(noon == "AM" || noon == "am")
            {
                  noon = "PM";
            }
            else if(noon == "PM" || noon == "pm")
            {
                  noon = "AM";
            }
        }
        else if(hour > 12 )
        {
            hour -= 12 ;
        }
    }
    return *this;
}

istream &operator>>(istream &input, Time &t1)
{
    string hour, minute, type;

    getline(input, hour, ':');
    getline(input, minute, ' ');
    getline(input, type);

    t1.set_hour(stoi(hour));
    t1.set_minute(stoi(minute));
    t1.set_noon(type);

    return input;
}

int Time::get_hour()
{
    return hour;
}

int Time::get_minute()
{
    return minute;
}

string Time::get_noon()
{
    return noon;
}