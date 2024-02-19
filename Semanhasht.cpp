#include <iostream>
#include <string>
#include "Semanhasht.hpp"
#include "Time.hpp"

using namespace std;

void RequestManager::addRequest(string &sorce, string &destination, string &input_time)
{
    Request newRequest(sorce, destination, input_time);
    requestQueue.push(newRequest);
}


void SMHT::start()
{
    RequestManager request_M;
    Tehran t1;

    cin >> n;

    cin.ignore();
    while (n--)
    {
        getline(cin, hour);
        getline(cin, src);
        getline(cin, dst);

        request_M.addRequest(src, dst, hour);
    }

    while (!request_M.requestQueue.empty())
    {
        Request currentRequest = request_M.requestQueue.front();
        request_M.requestQueue.pop();

        Time time(currentRequest.input_time);
        try
        {
            save_directions path = t1.Find_Shortest_Path(t1.get_value(currentRequest.sorce), t1.get_value(currentRequest.destination));
            t1.print_shortest_path(path, time);
            t1.complete_matrix_p();
            save_directions pri = t1.find_best_cost(t1.get_value(currentRequest.sorce), t1.get_value(currentRequest.destination));
            t1.print_best_price(pri, time);
        }
        catch (invalid_argument e1)
        {
            cout << e1.what() << endl;
        }
    }
}
