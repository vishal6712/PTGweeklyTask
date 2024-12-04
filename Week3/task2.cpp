//#include<iostream>
//#include <thread>
//#include<mutex>
//#include <chrono>
//using namespace std;
//
//class VehicleData
//{
//	double speed;
//	double fuelLevel;
//	double engineTemprature;
//public:
//	VehicleData()
//	{
//		//default
//	}
//	void update(double randomSpeed, double randomFuel, double randomEngineTemprature)
//	{
//		this->speed = randomSpeed;
//		this->fuelLevel = randomFuel;
//		this->engineTemprature = randomEngineTemprature;
//	}
//	void display()
//	{
//		if (engineTemprature > 100)
//		{
//			cout << "Engine Temprature: " << engineTemprature << "cel " <<"\tWarning!!!!  Engine Temprature is high."<< endl;
//		}
//		else
//		{
//			cout << "Engine Temprature: " << engineTemprature <<"cel "<< endl;
//		}
//		if (fuelLevel < 10)
//		{
//			cout << "Fuel is: " << fuelLevel << "% " <<"\tWarning!!!!  Low Fuel."<< endl;
//		}
//		else
//		{
//			cout << "Fuel is: " << fuelLevel <<"% "<< endl;
//		}
//		cout << "Speed of vehicle: " << speed << "km/h \n" << endl;
//	}
//};
//
//void updateVehicleData(VehicleData& data, mutex& mtx)
//{
//	while (true)
//	{
//		double randomSpeed = (rand() % 10000) / 100.0;
//		double randomFuel = (rand() % 10000) / 100.0;
//		double randomEngineTemprature = (rand() % 10000) / 100.0 + 2.0;
//		
//			lock_guard<mutex> lock(mtx);
//			data.update(randomSpeed, randomFuel, randomEngineTemprature);
//		
//		
//			//lock_guard<mutex> lock(mtx);
//			data.display();
//		
//		if (randomSpeed == 0.0)
//		{
//			/*{
//				lock_guard<mutex> lock(mtx);
//				data.display();
//			}*/
//			cout << "Speed is very low, vehicle stopped." << endl;
//			break;
//		}
//		if (randomFuel <= 2.0)
//		{
//			/*{
//				lock_guard<mutex> lock(mtx);
//				data.display();
//			}*/
//			cout << "No fuel, vehicle stopped." << endl;
//			break;
//		}
//		if (randomEngineTemprature >= 100.0)
//		{
//			/*{
//				lock_guard<mutex> lock(mtx);
//				data.display();
//			}*/
//			cout << "Engine temperature too high, vehicle stopped." << endl;
//			break;
//		}
//
//		this_thread::sleep_for(chrono::seconds(1));
//	}
//}
//int main()
//{
//	
//	srand(static_cast<unsigned int>(time(0)));
//	
//	VehicleData data;
//
//	mutex mtx;
//	thread updater(updateVehicleData, ref(data), ref(mtx));
//	updater.join();
//
//	
//}
