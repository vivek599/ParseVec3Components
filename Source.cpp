#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
	vector<float> vec3(3);
	string str = "0.0005f, 8.1005, 5.005f"; 

	stringstream ss(str);

	while (ss.good())
	{
		string substr;
		getline(ss, substr, ',');
		vec3.push_back(stof(substr));
	}
 
	system("pause");
	return 0;
}