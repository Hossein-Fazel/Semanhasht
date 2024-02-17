#ifndef SMHT_HPP
#define SMHT_HPP
#include <queue>
#include <iostream>
#include "3I8_sp.hpp"

using namespace std;

class SMHT // samaneh modiriate haml-o naghle tehran.
{
public:
    void start();

private:
    int n;
    string hour;
    string src, dst;
};

struct Request
{
    string input_time;
    string sorce;
    string destination;

    Request(string &src, string &dest, string &t) : sorce(src), destination(dest), input_time(t) {}
};

class RequestManager
{
public:
    void addRequest(string &sorce, string &destination, string &input_time);
    void processR(Request &request);

    queue<Request> requestQueue;
};

#endif
