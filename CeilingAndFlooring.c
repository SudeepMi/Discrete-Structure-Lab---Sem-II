#include <stdio.h> 

int main(){
	float floatData = 1000.86;
	int finalData;
	
	int lessData = (int)floatData - 1;
	int greaterData = (int)floatData + 1;
	
	int margin = (lessData + greaterData) / 2;
	
	finalData = (floatData > margin + 0.5)?greaterData:margin;
	
	printf("The rounded value is %d", finalData);
	return 0;
}
