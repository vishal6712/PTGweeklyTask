//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Navigation
//{
//public:
//	void choice()
//	{
//		while (true)
//		{
//			cout << "Enter choice to navigate: " << endl;
//			cout << "1.Main Menu" << endl;
//			cout << "0.Exit" << endl;
//			int n;
//			cin >> n;
//
//			switch (n)
//			{
//			case 1:
//				main_menu();
//				break;
//			case 0:
//				cout << "Exited.";
//				exit(0);
//				
//			default:
//				cout << "Entered wrong number.";
//			}
//		}
//	}
//	void main_menu()
//	{
//		while (true)
//		{
//			cout << "Enter choice to navigate: " << endl;
//			cout << "1.Settings" << endl;
//			cout << "2.Media" << endl;
//			cout << "3.Back" << endl;
//			cout << "0.exit" << endl;
//			int n;
//			cin >> n;
//			switch (n)
//			{
//			case 1:
//				settings();
//				break;
//			case 2:
//				media();
//				break;
//			case 3:
//				choice();
//				break;
//			case 0:
//				cout << "Exited.";
//				exit(0);
//
//			default:
//				cout << "Entered wrong number.";
//			}
//		}
//	}
//	void settings()
//	{
//		while (true)
//		{
//			cout << "Enter choice to navigate: " << endl;
//			cout << "1.Display settings" << endl;
//			cout << "2.Audio settings" << endl;
//			cout << "3.Back" << endl;
//			cout << "0.exit" << endl;
//			int n;
//			cin >> n;
//			switch (n)
//			{
//			case 1:
//				cout << "Brightness level 56.\n" << endl;
//				break;
//			case 2:
//				cout << "Volumn level 70.\n" << endl;
//				break;
//			case 3:
//				main_menu();
//				break;
//			case 0:
//				cout << "Exited.";
//				exit(0);
//
//			default:
//				cout << "Entered wrong number.";
//			}
//		}
//	}
//	void media()
//	{
//		while (true)
//		{
//			cout << "Enter choice to navigate: " << endl;
//			cout << "1.Radio" << endl;
//			cout << "2.Bluetooth Audio" << endl;
//			cout << "3.Back" << endl;
//			cout << "0.exit" << endl;
//			int n;
//			cin >> n;
//			switch (n)
//			{
//			case 1:
//				cout << "Radio started channel no.13.\n" << endl;
//				break;
//			case 2:
//				cout << "Bluetooth connected.\n" << endl;
//				break;
//			case 3:
//				main_menu();
//				break;
//			case 0:
//				cout << "Exited.";
//				exit(0);
//
//			default:
//				cout << "Entered wrong number.";
//			}
//		}
//	}
//	
//};
//int main()
//{
//	Navigation navigation;
//	navigation.choice();
//
//	return 0;
//}