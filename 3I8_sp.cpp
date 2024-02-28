#include "3I8_sp.hpp"
#include <stdexcept>
#include <iostream>
#include <map>
#include <fstream>
#include <algorithm>
#include "Time.hpp"
#include "vehicle.hpp"
#include <queue>

using namespace std;

#define V 59

Tehran::Tehran()
{
    read_file();
}

string Tehran::search(int key)
{
    for (auto i : stations)
    {
        if (i.second == key)
        {
            return i.first;
        }
    }
}

Node_p Price::get_min()
{
    Node_p minimun;
    for (auto i : price_edge)
    {
        if (minimun.geymat > i.geymat)
        {
            minimun = i;
        }
    }
    return minimun;
}

Node_p Node_sp::get_min_dist()
{
    Node_p min_dist;

    for (Node_p &value : dist_edge)
    {
        if (value.geymat < min_dist.geymat)
        {
            min_dist = value;
        }
    }

    return min_dist;
}

Node_p Node_sp::get_vehicle(string name)
{
    for (Node_p &node : dist_edge)
    {
        if (node.vehicle == name)
        {
            return node;
        }
    }

    return Node_p{};
}

int Tehran::minDistance(save_directions dist[], bool sptSet[])
{

    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v].distance <= min)
            min = dist[v].distance, min_index = v;

    return min_index;
}

save_directions Tehran::Find_Shortest_Path(int src, int dest)
{
    if (src >= 0 && src <= 58 && dest >= 0 && dest <= 58)
    {
        save_directions dist[V];

        bool sptSet[59]{false};

        dist[src].distance = 0;
        dist[src].direct.push_back(search(src));

        for (int count = 0; count < V - 1; count++)
        {
            string viechel = "";

            int u = minDistance(dist, sptSet);

            sptSet[u] = true;

            for (int v = 0; v < V; v++)

                if (!sptSet[v] && matrix[u][v].get_min_dist().geymat != INT_MAX && dist[u].distance != INT_MAX && dist[u].distance + matrix[u][v].get_min_dist().geymat < dist[v].distance)
                {
                    dist[v].distance = dist[u].distance + matrix[u][v].get_min_dist().geymat;

                    dist[v].direct = dist[u].direct;
                    dist[v].direct.push_back(search(v));
                    dist[v].Line_vehicle = dist[u].Line_vehicle;
                    dist[v].Line_vehicle.push_back(matrix[v][u].get_min_dist().type);
                }
        }

        return dist[dest];
    }
    else
    {
        throw invalid_argument("Not existing value!");
    }
}

int Tehran::get_value(string key)
{
    if (stations.count(key) == 0)
    {
        return -1;
    }
    return stations[key];
}

void Tehran::read_file()
{

    ifstream file;
    string arr[2] = {"line", "bus"};
    int index = 0;
    for (int i = 0; i < 2; i++)
    {
        file.open(arr[i] + ".txt", ios::in);
        if (file.is_open())
        {
            string line;
            getline(file, line);
            line.erase(line.size() - 1, 1);

            while (!file.eof())
            {
                string stat1;
                string stat2;
                string dis;
                getline(file, stat1);

                if (stat1 == "end")
                {
                    getline(file, line);
                    if (line.size() != 0)
                    {
                        line.erase(line.size() - 1, 1);
                    }
                    getline(file, stat1);
                }

                getline(file, stat2);
                getline(file, dis);
                if (find(Linemap[line].begin(), Linemap[line].end(), stat1) == Linemap[line].end())
                {
                    Linemap[line].push_back(stat1);
                }
                if (find(Linemap[line].begin(), Linemap[line].end(), stat2) == Linemap[line].end())
                {
                    Linemap[line].push_back(stat2);
                }
                if (stations.count(stat1) == 0)
                {
                    stations.insert({stat1, index});
                    index++;
                }
                if (stations.count(stat2) == 0)
                {
                    stations.insert({stat2, index});
                    index++;
                }

                if (line[0] == 'l')
                {
                    Node_p v1{stoi(dis), line, "Taxi"}, v2{stoi(dis), line, "Subway"};
                    matrix[get_value(stat1)][get_value(stat2)].dist_edge.push_back(v1);
                    matrix[get_value(stat1)][get_value(stat2)].dist_edge.push_back(v2);
                    matrix[get_value(stat2)][get_value(stat1)].dist_edge.push_back(v1);
                    matrix[get_value(stat2)][get_value(stat1)].dist_edge.push_back(v2);
                }
                else if (line[0] == 'b')
                {
                    Node_p v1{stoi(dis), line, "Bus"};
                    matrix[get_value(stat1)][get_value(stat2)].dist_edge.push_back(v1);
                    matrix[get_value(stat2)][get_value(stat1)].dist_edge.push_back(v1);
                }
            }
            file.close();
        }
    }
}

void Tehran::print_shortest_path(save_directions path, Time arrive_t)
{
    cout << "shortest path :" << endl;
    cout << path.distance << " km" << endl;
    bool ch = 0;
    for (int i = 0; i < path.direct.size() - 1; i++)
    {
        cout << path.direct[i] << " -- ";

        string vehi;
        if (path.Line_vehicle[i][0] == 'l')
        {
            cout << "(Taxi or Subway)";
            vehi = "Subway";
        }
        else
        {
            cout << "(Bus)";
            vehi = "Bus";
        }

        cout << " --> ";
        if (i == 0)
        {
            arrive_t += calc_time(path.direct[i], path.direct[i + 1], "NULL", vehi, arrive_t);
        }
        else
        {
            arrive_t += calc_time(path.direct[i], path.direct[i + 1], path.Line_vehicle[i - 1], vehi, arrive_t);
        }
    }
    cout << path.direct[path.direct.size() - 1] << endl;
    cout << "arriving time : ";
    arrive_t.print();

}

void Tehran::complete_matrix_p()
{
    for (auto item : Linemap)
    {
        bool count = 0;
        if (item.first[0] == 'l')
        {
            count = 1;
        }
        bool check_line = 1;
        for (int i = 0; i < 1 + count; i++)
        {
            if (check_line == 1)
            {
                for (auto st1 : item.second)
                {
                    for (auto st2 : item.second)
                    {
                        if (st1 != st2)
                        {
                            Node_p cost;
                            cost.geymat = count == 1 ? 3267 : 2250;
                            cost.type = item.first;
                            cost.vehicle = count == 1 ? "Subway" : "Bus";

                            matrix_p[stations[st1]][stations[st2]].price_edge.push_back(cost);
                            matrix_p[stations[st2]][stations[st1]].price_edge.push_back(cost);
                        }
                    }
                }
            }
            if (check_line == 0)
            {
                for (int j = 0; j < item.second.size() - 2; j++)
                {
                    Node_p cost;
                    cost.geymat = 6000 * matrix[stations[item.second[j]]][stations[item.second[j + 1]]].get_vehicle("Taxi").geymat;
                    cost.type = item.first;
                    cost.vehicle = "Taxi";

                    matrix_p[stations[item.second[j]]][stations[item.second[j + 1]]].price_edge.push_back(cost);
                    matrix_p[stations[item.second[j + 1]]][stations[item.second[j]]].price_edge.push_back(cost);
                }
            }
            check_line = 0;
        }
    }
}

save_directions Tehran::find_best_cost(int src, int dest)
{
    if (src >= 0 && src <= 58 && dest >= 0 && dest <= 58)
    {
        save_directions dist[V];

        bool sptSet[59]{false};

        dist[src].distance = 0;
        dist[src].direct.push_back(search(src));

        for (int count = 0; count < V - 1; count++)
        {
            string viechel = "";

            int u = minDistance(dist, sptSet);

            sptSet[u] = true;

            for (int v = 0; v < V; v++)

                if (!sptSet[v] && matrix_p[u][v].get_min().geymat != INT_MAX && dist[u].distance != INT_MAX && dist[u].distance + matrix_p[u][v].get_min().geymat < dist[v].distance)
                {
                    dist[v].distance = dist[u].distance + matrix_p[u][v].get_min().geymat;

                    dist[v].direct = dist[u].direct;
                    dist[v].direct.push_back(search(v));
                    dist[v].Line_vehicle = dist[u].Line_vehicle;
                    dist[v].Line_vehicle.push_back(matrix_p[v][u].get_min().type);
                    dist[v].vehicle = dist[u].vehicle;
                    dist[v].vehicle.push_back(matrix_p[v][u].get_min().vehicle);
                }
        }
        return dist[dest];
    }
    else
    {
        throw invalid_argument("Not existing value!");
    }
}

void Tehran::print_best_price(save_directions path, Time arrive_t)
{
    cout << "best cost :" << endl;
    cout << path.distance << " toman" << endl;
    bool check = 0;
    for (int i = 0; i < path.direct.size() - 1; i++)
    {
        auto start = find(Linemap[path.Line_vehicle[i]].begin(), Linemap[path.Line_vehicle[i]].end(), path.direct[i]) - Linemap[path.Line_vehicle[i]].begin();
        auto end = find(Linemap[path.Line_vehicle[i]].begin(), Linemap[path.Line_vehicle[i]].end(), path.direct[i + 1]) - Linemap[path.Line_vehicle[i]].begin();

        // if( start+1 == end || end +1 == start  )
        // {
        //     if( path.direct.size() == 2 )
        //     {
        //        arrive_t += calc_time_bestp(path.direct[i], path.direct[i+1]  ,"NULL" , path.vehicle[i] , check);
        //        cout << path.direct[i] <<" -- " << "(" << path.vehicle[i] << ")" << " --> " ;
        //        break;
        //     }
        //     cout << path.direct[i] <<" -- " << "(" << path.vehicle[i] << ")" << " --> " ;
        //     if (i == 0)
        //     {
        //        arrive_t += calc_time_bestp(path.direct[i], path.direct[i+1]  ,"NULL" , path.vehicle[i] , check);
        //     }
        //     else
        //     {
        //        arrive_t += calc_time_bestp(path.direct[i] , path.direct[i+1] , path.Line_vehicle[i-1] , path.vehicle[i] , check);
        //     }
        // }

        // else
        // {
        int step = start < end ? 1 : -1;
        for (size_t j = start; j != end; j += step)
        {
            cout << Linemap[path.Line_vehicle[i]][j];

            if (j != end)
            {
                cout << " -- "
                     << "(" << path.vehicle[i] << ")"
                     << " --> ";
            }
            if (i == 0)
            {
                arrive_t += calc_time(Linemap[path.Line_vehicle[i]][j], Linemap[path.Line_vehicle[i]][j + step], "NULL", path.vehicle[i], arrive_t);
            }

            else
            {
                int index = j == start ? i - 1 : i;
                arrive_t += calc_time(Linemap[path.Line_vehicle[i]][j], Linemap[path.Line_vehicle[i]][j + step], path.Line_vehicle[index], path.vehicle[i], arrive_t);
            }
        }
    }
    // }
    cout << path.direct[path.direct.size() - 1];

    cout << endl;
    cout << "arriving time : ";
    arrive_t.print();
}

int Tehran::calc_time(string src, string dest, string pre_line, string vehi, Time t1)
{
    int speed = 0;
    machine m1(vehi);
    speed = matrix[get_value(src)][get_value(dest)].get_vehicle(vehi).geymat * m1.get_path_time(t1);

    if (matrix[get_value(src)][get_value(dest)].get_vehicle(vehi).type != pre_line)
    {
        speed += m1.get_in_time(t1);
    }

    return speed;
}
