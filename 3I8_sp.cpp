#include "3I8_sp.hpp"
#include <stdexcept>
#include <iostream>
#include <map>
#include <fstream>
#include <algorithm>
using namespace std;

#define V 59

Tehran::Tehran()
{
    read_file() ;
}

string Tehran::search(int key)
{
    for(auto i : stations)
    {
        if(i.second == key)
        {
            return i.first;
        }
    }
}

int Tehran::minDistance(save_directions dist[], bool sptSet[])
{

	int min = INT_MAX, min_index;

	for (int v = 0; v < V; v++)
		if (sptSet[v] == false && dist[v].distance <= min)
			min = dist[v].distance, min_index = v;

	return min_index;
}

void Tehran::Find_Shortest_Path(int src,int dest)
{    
    if( src >=0 && src <=58 && dest >=0 && dest <=58)
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

                
                if (!sptSet[v] && matrix[u][v].s_p && dist[u].distance != INT_MAX && dist[u].distance + matrix[u][v].s_p < dist[v].distance)
                {
                    dist[v].distance = dist[u].distance + matrix[u][v].s_p;

                    dist[v].direct = dist[u].direct;
                    dist[v].direct.push_back(search(v));
                    dist[v].viechel = dist[u].viechel;
                    dist[v].viechel.push_back(matrix[v][u].type);
                }
        }

        cout<< dist[dest].distance << endl ;

        for(int i = 0 ; i < dist[dest].direct.size() - 1; i++)
        {
            cout << dist[dest].direct[i] << " -- ";

            if(dist[dest].viechel[i] == "l1" or dist[dest].viechel[i] == "l6" or dist[dest].viechel[i] == "l3" or dist[dest].viechel[i] == "l4")
            {
                cout << "(Taxi or Subway)" ;
            }
            else
            {
                cout <<  "(Bus)" ;
            }
        
            cout << " --> ";
        }
        cout << dist[dest].direct[dist[dest].direct.size() - 1];
    }
    else
    {
        throw invalid_argument("Not existing value!") ;

    }
}

int Tehran::get_value(string key)
{
    if(stations.count(key) == 0)
    {
        return -1;
    }
    return stations[key];
}

void Tehran::read_file()
{

     ifstream file ;
     string arr[2] = {"line" , "bus"} ;
     int index = 0 ; 
     for(int i=0 ; i<2 ; i++)
     {
        file.open(arr[i]+".txt" , ios::in );
        if(file.is_open())
        { 
            string line ;
            getline( file , line);
            line.erase(line.size()-1 , 1) ;

            while (!file.eof())
            {
                string stat1 ;
                string stat2 ;
                string dis ;
                getline(file , stat1);

                if(stat1 == "end")
                {
                        getline( file , line);
                        if (line.size()!= 0)
                        {
                            line.erase(line.size()-1 , 1) ;
                        }
                        getline(file , stat1) ;
                        
                }

                getline(file , stat2);
                getline(file , dis);
                if(find(Linemap[line].begin(),Linemap[line].end(),stat1) == Linemap[line].end())
                {
                    Linemap[line].push_back(stat1);

                }
                if(find(Linemap[line].begin(),Linemap[line].end(),stat2) == Linemap[line].end())
                {
                    Linemap[line].push_back(stat2);
                    
                }
                if (stations.count(stat1)== 0)
                {
                    stations.insert({stat1 , index}) ;
                    index++ ;
                    
                }
                if (stations.count(stat2)== 0)
                {
                    stations.insert({stat2 , index}) ;
                    index++ ;
                }
                
               if( matrix[get_value(stat1)][get_value(stat2)].s_p != 0 && matrix[get_value(stat1)][get_value(stat2)].s_p > stoi(dis) ) // for more info
               {
                 matrix[get_value(stat1)][get_value(stat2)].type = line ;
                 matrix[get_value(stat1)][get_value(stat2)].s_p = stoi(dis) ;
                 matrix[get_value(stat2)][get_value(stat1)].type = line ;
                 matrix[get_value(stat2)][get_value(stat1)].s_p = stoi(dis) ;
                 
               }
               else if( matrix[get_value(stat1)][get_value(stat2)].s_p == 0 )
               {
                 matrix[get_value(stat1)][get_value(stat2)].type = line ;
                 matrix[get_value(stat1)][get_value(stat2)].s_p = stoi(dis) ;
                 matrix[get_value(stat2)][get_value(stat1)].type = line ;
                 matrix[get_value(stat2)][get_value(stat1)].s_p = stoi(dis) ;

               }
            
            }
        file.close() ;
        }
        
     }
}