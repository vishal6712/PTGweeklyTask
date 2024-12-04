//#include<iostream>
//#include<map>
//using namespace std;
//
//class Theme
//{
//	string backgroundColor;
//	string fontColor;
//	int fontSize;
//	string iconStyle;
//public:
//	Theme()
//	{
//		//default
//	}
//
//	Theme(string backgroundColor,string fontColor,int fontSize,string iconStyle)
//	{
//		this->backgroundColor= backgroundColor;
//		this-> fontColor= fontColor;
//		this-> fontSize= fontSize;
//		this-> iconStyle= iconStyle;
//	}
//
//	void display()
//	{
//		cout << "Background color is: " << backgroundColor << endl;
//		cout << "Font Color is: " << fontColor << endl;
//		cout << "Font size is: " << fontSize << endl;
//		cout << "Icon style is: " << iconStyle << "\n"<<endl;
//	}
//
//};
//
//int main()
//{
//	Theme classic("Red", "White", 18, "Normal");
//	Theme sports("Blue", "White", 20, "Big");
//	Theme eco("Green", "White", 23, "Small");
//	map<int, Theme> mymap;
//
//	mymap[1] = classic;
//	mymap[2] = classic;
//	mymap[3] = classic;
//
//	while (true)
//	{
//		cout << "Enter choice to select Theme: " << endl;
//		cout << "1.Classic" << endl;
//		cout << "2.Sport" << endl;
//		cout << "3.Eco" << endl;
//		int n;
//		cin >> n;
//		switch (n)
//		{
//		case 1:
//			mymap[1].display();
//			exit(0);
//			break;
//		case 2:
//			mymap[2].display();
//			exit(0);
//			break;
//		case 3:
//			mymap[3].display();
//			exit(0);
//			break;
//		default:
//			cout << "Enter correct option." << endl;
//		}
//	}
//
//}
