//#include<iostream>
//#include<vector>
//#include<set>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//struct DynamicWidgets
//{
//	float speedoMeter;
//	float tachoMeter;
//};
//struct SaticWidgets
//{
//	string logo;
//	string warningLights;
//	SaticWidgets(const string& logo, const string& warningLights)
//		: logo(logo), warningLights(warningLights) {}
//
//	bool operator==(const SaticWidgets& other) const {
//		return logo == other.logo && warningLights == other.warningLights; // Compare by
//			}
//
//	 Comparison operator to allow insertion into set
//	bool operator<(const SaticWidgets& other) const
//	{
//		return logo < other.logo || (logo == other.logo && warningLights < other.warningLights);
//	}
//};
//int main()
//{
//	srand(static_cast<unsigned int>(time(0)));
//
//	vector<DynamicWidgets> dynamicWidgets;
//	set<SaticWidgets> staticWidgets;
//	int i = 0;
//	while (i < 10)
//	{
//		float speedoMeterValue = rand() % 10000 / 100.0 + 1;
//		float tachoMeterValue = rand() % 10000 / 100.0 + 1;
//
//		dynamicWidgets.push_back({ speedoMeterValue,tachoMeterValue });
//		i++;
//	}
//
//	for_each(dynamicWidgets.begin(), dynamicWidgets.end(), [](DynamicWidgets x)
//		{
//			cout << "Speed is: " << x.speedoMeter << " km/h\t" << "RPM is: " << x.tachoMeter << "rpm" << endl;
//		});
//
//	cout << endl;
//	vector<string> logos = { "Tyre pressure","Break warning","Battery warning","Engine warning","AirBag warning","Temprature warning" };
//	vector<string> warningLights = { "Red" ,"Yellow","Green","Pink" };
//	int j = 0;
//	while (j < 10)
//	{
//		int randomLogoIndex = rand() % logos.size();
//		int randomWarningIndex = rand() % warningLights.size();
//
//		staticWidgets.insert(SaticWidgets(logos[randomLogoIndex], warningLights[randomWarningIndex]));
//		j++;
//	}
//	for_each(staticWidgets.begin(), staticWidgets.end(), [](SaticWidgets x)
//		{
//			cout << "Warning from: " << x.logo << "\t" << "Priority in color: " << x.warningLights << endl;
//		});
//
//	SaticWidgets target("", "Green");
//	auto it = staticWidgets.find(target);
//	if (it != staticWidgets.end())
//	{
//		cout << "\nFound a widget with Green warning light:" << endl;
//		cout << "Warning from: " << it->logo << "\t" << "Priority in color: " << it->warningLights << endl;
//
//		int index = distance(staticWidgets.begin(), it);
//		cout << "Index of the found element: " << index << endl;
//	}
//	else
//	{
//		cout << "\nNo widget with Green warning light found!" << endl;
//	}
//
//	vector<string> combinedVector;
//	for_each(dynamicWidgets.begin(), dynamicWidgets.end(), [&combinedVector](DynamicWidgets x) {
//		combinedVector.push_back("Speed: " + to_string(x.speedoMeter) + " km/h, RPM: " + to_string(x.tachoMeter));
//		});
//
//	for_each(staticWidgets.begin(), staticWidgets.end(), [&combinedVector](SaticWidgets x)
//		{
//			combinedVector.push_back("Warning from: " + x.logo + ", Priority in color: " + x.warningLights);
//		});
//
//	cout << "\nOutput from combined vector: "<<endl;
//	for (string output : combinedVector)
//	{
//		cout << output << endl;
//	}
//
//	string target1 = "Warning from: Break warning, Priority in color: Red";
//	auto it1 = find(combinedVector.begin(), combinedVector.end(), target1);
//	if (it1 != combinedVector.end()) {
//		cout << "\nFound static widget data at index: " << distance(combinedVector.begin(), it1) << endl;
//		cout << *it1 << endl;
//	}
//	else {
//		cout << "\nNo matching static widget found!" << endl;
//	}
//}
//
