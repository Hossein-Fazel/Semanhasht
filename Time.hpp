#ifndef TIME_HPP
#define TIME_HPP

#include<iostream>
#include<unordered_map>
#include<vector>
#include<limits.h>

using namespace std;

class Time
{
    public:
        Time(){};
        Time(string get_time);
        void set_noon(string noon);
        void set_hour(int h);
        void set_minute(int m);
        Time operator+=(int min);
        friend istream &operator>>(istream &input, Time &time);
        void print();
    private :
        int hour = 0;
        int minute = 0;
        string noon;
};

#endif