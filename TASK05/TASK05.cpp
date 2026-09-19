#include <iostream>
using namespace std;
int main()
{
    int reading, count, total, highest, lowest, unhealthy;
    cout << "Enter readings (-1 to stop): ";
    cin >> reading;
    if (reading == -1)
    {
        cout << "No readings entered" << endl;
    }
    else
    {
       count = 0;
       total = 0;
       highest = reading;
       lowest = reading;
       unhealthy = 0;
       while (reading != -1)
        {
            count++;
            total += reading;
            if (reading > highest)
            {
                highest = reading;
            }
            if (reading < lowest)
            {
                lowest = reading;
            }
            if (reading > 150)
            {
                unhealthy++;
            }
            cin >> reading;
        }
        double average = (double)total / count;
        cout << "\nReadings: " << count;
        cout << "\nTotal: " << total;
        cout << "\nAverage: " << average;
        cout << "\nHighest: " << highest;
        cout << "\nLowest: " << lowest;
        cout << "\nUnhealthy readings: " << unhealthy;
    }
    return 0;
}