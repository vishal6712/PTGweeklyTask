#include<iostream>
#include<vector>
#include<memory>
#include<algorithm>
using namespace std;


template<class T1>
class container
{
public:
	vector<T1> v1;

	void add(int n)
	{
		v1.resize(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v1[i];
		}
		cout << "Values inserted.";
		cout << endl;
	}

	void get()
	{
		/*for (const auto& num : v1)
		{
			cout << num << " ";
		}
		cout << endl;*/

		for_each(v1.begin(), v1.end(), [](const int& ele)
			{
				cout << ele << " ";
			});
		cout << endl;
	}

	constexpr void size()
	{
		cout << "Size is: " << v1.size() << endl;
	}
};
int main()
{
	int input;
	cout << "Enter number of elements: ";
	cin >> input;

	unique_ptr<container<int>>ptr(new container<int>());
	ptr->add(input);

	unique_ptr<container<int>>ptr2 = move(ptr);

	ptr2->get();//have to use ptr2 bcz ownership changed
	ptr2->size();//have to use ptr2 bcz ownership changed


	if (ptr) {
		ptr->size(); // if ptr is not null
	}
	else {
		cout << "ptr is now null after move.\n";
	}
	shared_ptr<container<int>>s_ptr1(new container<int>());
	shared_ptr<container<int>>s_ptr2 = s_ptr1;
	shared_ptr<container<int>>s_ptr3 = s_ptr1;
	cout << "Count is: " << s_ptr1.use_count();

}