// در فایل Semanhasht.cpp
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

void RequestManager::processR(Request &request)
{
    cout << "-----------------------------------------"<<endl;
    cout << "Processing request - Source: " << request.sorce
         << ", Destination: " << request.destination
         << ", Time: " << request.input_time << endl;

    cout << "Request processed successfully." << endl;
}

void SMHT::start()
{
    RequestManager request_M;
    Tehran t1;

    cout << "How many request:";
    cin >> n;

    while (n--)
    {
        cin.ignore();
        cout << "Starting Time : ";
        getline(cin, hour);
        cout << "Origin : ";
        getline(cin, src);
        cout << "DEstination : ";
        getline(cin, dst);

        request_M.addRequest(src, dst, hour);
    }

    while (!request_M.requestQueue.empty())
    {
        Request currentRequest = request_M.requestQueue.front();
        request_M.requestQueue.pop();

        request_M.processR(currentRequest);
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
            cout << e1.what();
        }
    }
}
