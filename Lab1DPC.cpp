#include <iostream>
using namespace std;
int main()
{
int X1, X2, Y1, Y2, result1, result2, result3, result4, result5;
//The user will be prompted to insert two sets of points consisting of real integers. The the slope and midpoint will
//be obtained via ( x1+x2)/2, (y1+y2)/2 and (y2-y1)/(x2-x1).
cout << "Please input two sets of points consisting of real integers.	";
cout << "Please input the first X value.	";
cin >> X1;
cout << "Please input the first Y value.	";
cin >> Y1;
cout << "Please input the second X value.	";
cin >> X2;
cout << "Please input the second Y value.	";
cin >> Y2;
	result1 = (X1+X2)/2;
	result2 = (Y1+Y2)/2;
	result3 = (Y2-Y1);
	result4 = (X2-X1);
result5 = result3/result4;
cout << "The midpoint is found at " << result1 << "," << result2;
cout << " The slope of the line is " << result5;
return 0;
} //END OF MAIN
