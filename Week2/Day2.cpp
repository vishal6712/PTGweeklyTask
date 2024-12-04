#include <iostream>
#include<array>
#include <algorithm>
#include<iomanip>
using namespace std;

struct CarSensorData
{
    int speed;
    int fuelLevel;
    double engineTemp;
    array<double, 4> tirePressure;
};

int main()
{
    CarSensorData data = { 100, 80, 90.5, {32.5, 28.0, 35.5, 29.5} };

    transform(&data.speed, &data.speed + 1, &data.speed, [](int val) {return val + 10; });

    transform(&data.fuelLevel, &data.fuelLevel + 1, &data.fuelLevel, [](int vals) {return vals - 5; });

    data.engineTemp += 2.0;

    bool tiresSafe = all_of(data.tirePressure.begin(), data.tirePressure.end(), [](double pressure) {return pressure >= 30.0; });

    cout << "Speed:         " << setw(10) << right << data.speed << " km/h\n";
    cout << "Fuel Level:    " << data.fuelLevel << "%\n";
    cout << "Engine Temperature: " << data.engineTemp << " °C\n";
    cout << "Tire Pressures: ";

    for (size_t i = 0; i < data.tirePressure.size(); ++i)
    {
        cout << fixed << setprecision(1) << data.tirePressure[i];
        if (i != data.tirePressure.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << " PSI\n";
    cout << "Tires Safe: " << boolalpha << tiresSafe << "\n";
    return 0;
}