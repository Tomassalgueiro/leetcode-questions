#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

using namespace std; 

string reformatDate(string date) {
	int d, y = 0;
	string res,mon, month, day, year;
	vector<string> separated;
	map<string,string> map_month = {{"Jan","01"},{"Feb","02"},{"Mar","03"},{"Apr","04"},{"May","05"},{"Jun","06"},{"Jul","07"},{"Aug","08"},{"Sep","09"},{"Oct","10"},{"Nov","11"},{"Dec","12"}}; 
	stringstream ss(date);

	ss >> d;
	if(d < 10){
		day += "0";		
		day += to_string(d); 
	}
	else {
		day += to_string(d); 
	}
	separated.push_back(day);
	ss >> mon;
	ss >> mon;
	auto it = map_month.find(mon);
	month = it->second;
	separated.push_back(month);
	ss >> y;
	year += to_string(y); 

	res += year + "-" + month + "-" + day;
	return res;	
   
}

int main(){
	cout << reformatDate("22nd Apr 2023");
	// 2052-10-20
}
