#include<iostream>
#include<cmath>//暂且保留，未知
int main()
{
	using namespace std;
	double x;
	cout << "ok";
	cin >> x;
	double a;//int整数，dounle小数
	a = sqrt(x);//sqrt表示根号平方根
	cout << a;
	cout << endl;

	double o;
	double h;
	h=pow(5, 2);
	cout << h;
	//pow为平方,前一数为你的数，后面自定义多少平方，原理差不多
	double m;
	double n;
	cin >> m;
	n = pow(m, 2);
	cout << n;

	int e = 5;
	int b = e * 6;
	cout << e << "e=";
	cout << b << "b";

	//std::cout<<"";省略开头using
	

	return 0;
}


