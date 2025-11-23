#include <iostream>
using namespace std;

class Roommate {
public:	
	string Name;
	int Age;
	string StudentId;
	string Course;
	string College;
	
	void describe_roommate(){
		cout<<"The description of my roommate is!!"<<endl;
		cout<<"Name -"<<Name<<endl;
		cout<<"Age -"<<Age<<endl;
		cout<<"StudentId -"<<StudentId<<endl;
		cout<<"Course -"<<Course<<endl;
		cout<<"College-"<<College<<endl;
		}
};

int main(){
	Roommate my_roommate;
	my_roommate.Name="Robert";
	my_roommate.Age=22;
	my_roommate.StudentId="ENC221-0123/2024";
	my_roommate.Course="Geomatic Engineering";
	my_roommate.College="COETEC";
	
	my_roommate.describe_roommate();
	return 0;
	}