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
        void print();

        Time operator+=(int min);
        friend istream &operator>>(istream &input, Time &time);
        Time operator+ (int min);

        int get_hour();
        int get_minute();
        string get_noon();

    private :
        int hour = 0;
        int minute = 0;
        string noon;
};

#endif