//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct Control
//{
//	int id; // Unique ID    
//	string type; // "button" or "slider"
//	string state; // "visible", "invisible", "disabled"
//
//	bool operator==(const Control& other) const {
//		return id == other.id; // Compare by id only
//	}
//	bool operator==(const string& stateVal) const {
//		return state == stateVal; // Compare by state only
//	}
//};
//int main()
//{
//	vector<Control> controlData;
//
//	controlData.push_back({ 1,"Button","Visible" });
//	controlData.push_back({ 4,"Button","Disable" });
//	controlData.push_back({ 6,"Button","Visible" });
//	controlData.push_back({ 2,"Button","Invisible" });
//	controlData.push_back({ 3,"Slider","Visible" });
//	controlData.push_back({ 9,"Slider","Visible" });
//	controlData.push_back({ 8,"Button","Invisible" });
//	controlData.push_back({ 5,"Slider","Invisible" });
//	controlData.push_back({ 7,"Slider","Disable" });
//	controlData.push_back({ 10,"Slider","Disable" });
//
//	for_each(controlData.begin(), controlData.end(), [](Control x)
//		{
//			cout << x.id<<" " << x.type<<" " << x.state<<" " << endl;
//		}
//	);
//
//	Control target = { 8,"","" };
//	auto it = find(controlData.begin(), controlData.end(), target);
//	cout <<"\nId found at index: " << it - controlData.begin()<<endl;
//
//
//	auto it1 = find_if(controlData.begin(), controlData.end(), [](Control x) {return  x.state == "Invisible"; });
//	cout << "Id found basis on condition at index: " << it1 - controlData.begin()<<endl;
//
//	auto it2 = adjacent_find(controlData.begin(), controlData.end(), [](Control x, Control y)
//		{
//			return x.state == y.state;
//		}
//	);
//	cout << "adjacent values fount from index: " << it2 - controlData.begin()<<endl;
//
//	string targetState = "Visible";
//	int countstate=count(controlData.begin(), controlData.end(), targetState);
//	cout << "Count of visible state: " << countstate<<endl;
//
//	int countcondition = count_if(controlData.begin(), controlData.end(), [](Control x)
//		{
//			return x.type=="Slider" && x.state=="Visible";
//		}
//	);
//	cout<< "Count of sliders that are visible: " << countcondition<<endl;
//
//	bool equalSubrange = equal(controlData.begin(), controlData.end() - 5, controlData.begin() + 5, controlData.end(), [](Control x, Control y) 
//		{
//			return x.type == y.type && x.state == y.state;
//		});
//
//	cout << "identical controls: (1) if true, (0) if false: " << equalSubrange << endl;
//
//}
