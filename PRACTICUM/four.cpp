#include <iostream> 
using namespace std; 

int main()
{

	int month; 
	cout << "Enter a month:" << endl; 
	cin >> month; 
    
	if(month > 12 || month <= 0) {
        cout << "Invalid";
    }
    else if(month == 12 || month == 1 || month ==2){
		cout << "It's winter" << endl; 
    }
    else if(month == 3 || month == 4 || month == 5) {
		cout << "It's spring" << endl; 
	}
    else if(month == 9 || month == 10 || month == 11) {
		cout << "It's autumn"; 
	} 
    else if(month == 6 || month == 7 || month == 8) {
		cout << "It's summer" << endl; 
	}

	return 0;
}
