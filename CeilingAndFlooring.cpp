#include <iostream> 
using namespace std;

int main(){
	float floatData = 1000.86;
	int finalData;
	
	int lessData = (int)floatData - 1;
	int greaterData = (int)floatData + 1;
	
	int margin = (lessData + greaterData) / 2;
	
	finalData = (floatData > margin + 0.5)?greaterData:margin;
	
	cout << "The rounded value is " << finalData;
	return 0;
}