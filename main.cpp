#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate falling distance
double fallingDistance(double time)
{
    const double g = 9.8;
    double distance = 0.5 * g * time * time;

    return distance;
}

int main()
{
    cout << fixed << setprecision(2);

    for (int time = 1; time <= 10; time++)
    {
        cout << "Time: " << time << " seconds"
             << " | Distance: " << fallingDistance(time)
             << " meters" << endl;
    }

    return 0;
}