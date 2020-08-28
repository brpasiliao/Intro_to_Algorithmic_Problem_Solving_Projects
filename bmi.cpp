#include <iostream>
using namespace std;
int main() {
	double w, h, bmi;
	cout << "Please enter your weight in kilograms: \n";
	cin >> w;
	cout << "Please enter your height in meters: \n";
	cin >> h;
	bmi = w / (h * h);
	cout << "Your BMI is " << bmi << ". ";
	if (bmi >= 25) cout << "You are overweight.\n";
	else if (bmi < 18.5) cout << "You are underweight.\n";
	else cout << "You are in the healthy weight.\n";
	return 0;

}
