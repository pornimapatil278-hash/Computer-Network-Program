#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n;

    cout << "Stop and Wait ARQ\n\n";
    cout << "Enter number of frames: ";
    cin >> n;

    srand(time(0));

    for (int i = 1; i <= n; i++)
    {
        int frame;

        cout << "\nEnter frame number: ";
        cin >> frame;

        cout << "\nSending Frame " << frame << "...\n";

        cout << "Timer started for Frame " << frame << "...\n";

        
        int loss = rand() % 2;

        if (loss == 1)
        {
            cout << "Frame " << frame << " lost!\n";

            this_thread::sleep_for(chrono::seconds(3));

            cout << "Timeout occurred after 3 seconds.\n";
            cout << "Retransmitting Frame " << frame << "...\n";

            cout << "Timer restarted for Frame " << frame << "...\n";
        }
        else
        {
            cout << "Frame " << frame << " received successfully!\n";
            cout << "ACK received for Frame " << frame << ".\n";
        }
    }

    return 0;
}