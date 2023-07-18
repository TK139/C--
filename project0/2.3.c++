#include<iostream>
using namespace std;
int main()
{
	int a = 3;
	int b = 5;
	int x;
	x = a + b;
	cout << x<<endl;

	int y;
	cin >> y;
	int i;
	cin >> i;
	cout << "y+i="<<y+i<<endl;
	cout << "y-i="<<y-i<<endl;
	cout << "y*i=" << y * i<<endl;
	cout << "y/i=" << y / i<<endl;
	cout << "y*i+2=" << y * i + 2 << endl;
	cout << "(y+2)*i=" << (y + 2) * i << endl;

	cout << "9/5=" << 9 / 5<<endl;//整数，所以只取整数
	cout << "9.00/5.00=" << 9.00 / 5.00<<endl;//有小数的加成，所以变为正确的值

	double j=3.14;
    double k=6.75;
	cout << "j*k=" << j * k<<endl;

	cout.setf(ios_base::fixed, ios_base::floatfield);//这是个神奇的东西
	cout << "Floating-point division:9.0/5.0=" << 9.0 / 5.0<<endl;
	cout << "integer division:9/5=" << 9.0 / 5.0 << endl;
	cout << "mixed division:9.0/5=" << 9.0 / 5 << endl;
	cout << "double constants:1E7/9.0" << 1.E7 / 9.0 << endl;
	cout << "float constants : 1E7f/9.0f" << 1.E7f / 9.0f << endl;


	return 0;
}