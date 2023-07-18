#include<iostream>
using namespace std;
int main()
{
	char ch = 'm';
	int i = ch;
	cout << ch << i<<endl;//char表字母，int表数字；
	ch = ch + 1;
	i = ch;
	cout << ch<<i<<endl;//+1字母按照ASCII;
	cout.put(ch);//()内只能输入一个字母；表示输入；
	cout << endl;

	cout << "\aWath's your password?:"<< endl;//\a表示振铃(神奇的效果)
	long code;//long表字节，指显示字节即范围，合理规划字节,code是密码的意思
	cout << "code:______\b\b\b\b\b\b";//\b表退格，与下划线数量一致，输入完全部覆盖
	cin >> code;
	cout << "\aYou entered" << code << "...\n";//完美

	return 0;
}