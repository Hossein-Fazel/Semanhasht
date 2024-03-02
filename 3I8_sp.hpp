#ifndef SEMANHASHT_HPP
#define SEMANHASHT_HPP

#include <iostream>
#include <unordered_map>
#include <vector>
#include <limits.h>
#include <unordered_set>
#include "Time.hpp"

using namespace std;

#define V 59

struct Node_p
{
    int geymat = INT_MAX;
    string type;
    string vehicle;
};

struct edge
{
    int dist = INT_MAX;
    string type;
    string vehicle;
};

class Price
{
public:
    vector<Node_p> price_edge;
    Node_p get_min();
};

class Node_sp
{
    public:
    vector<edge> dist_edge;
    edge get_min_dist();
    edge get_vehicle(string name);
};

struct save_directions
{
    int distance = INT_MAX;
    vector<string> direct;
    vector<string> Line_vehicle;
    vector<string> vehicle;
};

class Tehran
{
public:
    Tehran();
    int minDistance(save_directions dist[], bool sptSet[]);
    save_directions Find_Shortest_Path(int src, int dest);
    void print_shortest_path(save_directions path, Time arrive_t);
    string search(int key);
    int get_value(string key);
    void read_file();
    void complete_matrix_p();
    save_directions find_best_cost(int src, int dest);
    void print_best_price(save_directions path, Time arrive_t);
    int calc_time(string src, string dest, string pre_line, string vehi,Time t1);
    void travel_line( pair <string , string>data ,string src , save_directions save[] , Time t,bool sptSet[]);
    save_directions find_best_time(Time t);
    void print_best_time(Time t);
    struct myHash
    {
        size_t operator()(const pair<string,string> &obj)const
        {
            return hash<string>{}(obj.first) ^ hash<string>{}(obj.second);
        }
    };

private:
    unordered_map<string, vector<string>> Linemap;
    unordered_map<string, int> stations;
    unordered_map<string, unordered_set<pair<string , string> , Tehran::myHash>> node_v;
    Node_sp matrix[59][59];
    Price matrix_p[59][59];
};

#endif