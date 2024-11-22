
#include <iostream>
#include <string>

using namespace std;



class Tables {

private:

	string* tablename;
	int studentID;
	char* first_name;
	int age;
	char* last_name;


public:

	Tables() {

		if (tablename == NULL) {

			delete[]this->tablename;
			tablename = nullptr;

		}




	}





};

//comment



int main() {














	return 0;

}

















