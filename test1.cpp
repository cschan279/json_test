#include <iostream>
#include <sstream>  
#include "nlohmann/json.hpp"
#include <fstream>
#include <iomanip>


using json = nlohmann::json;
//https://github.com/nlohmann/json

int main()
{
	std::ostringstream ss;
	std::ifstream fin("test.json");
	json j;
	fin >> j;
	fin.close();
	int x = j["x"].get<int>();
	bool z = j["z"].get<bool>();
	
	ss << "(int)" << x << "(bool)" << z << std::endl;
	std::string s_j = ss.str();
	printf("%s", s_j.c_str());
	std::cout << j["zz"].get<bool>() << std::endl;
	//printf("%d \n", x);
	//std::string s_z;
	//s_z = z.to_string();
	//printf(s_z);
	//std::cout << j << std::endl;
	
}
