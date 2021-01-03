#include <iostream>
#include <string>
using namespace std;

int main(){
	int age;
	double height;
	double prop;
	string status;
	string x= "UNFRIEND";
	string y= "FRIEND";
	string z = "MARRIED";
	string ons = "ONE-NIGHT-STAND";
	string bf = "BEST FRIEND";
	
	cout << "Enter your age: ";
	cin >> age;
	if(age<=20){
		cout << "Enter your height: ";
		cin >> height;
		if(height<160){
			status = x;
		}else if(height<175){
			status = y;
		}else{
			cout << "Enter your property: ";
			cin>> prop;
			if(prop>69000000){
				status = z;
			}else{
				status = ons;
			}
		}
	}else if(age<30){
		cout << "Enter your property: ";
		cin >> prop;
		if(prop>10000000){
			status = bf;
		}else{
			status =  x;
		}
	}else{
		status = x;
	}
	
	cout<< "Your status = " << status;


	return 0;
}