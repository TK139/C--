#include<iostream>
#define ZERO 0
#include<climits>
int main()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;
	cout << sam<<endl;//short的最大值是32767
	sam = sam + 1;//sam的最大值就是32767，所以在加1的话则会溢出，所以往负数方向取，且按照正常加减法法则，+2为32767，+3为32766
	sue = sue + 2;//sue为正常运算
	cout << sam <<"," << sue<<endl;
	sam = ZERO;
	sue = ZERO;//写0同理
	cout << sam << "," << sue << endl;
	sam = sam -1;//sam作为0则-1，+1为1，正常运算
	sue = sue -1;//sue则不同，首先+1为正常运算，但-1就变成了65535，-2为65534
	cout << sam << "," << sue << endl;

	return 0;
}