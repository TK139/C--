#include<iostream>
using namespace std;
int main()
{
	char ch = 'm';
	int i = ch;
	cout << ch << i<<endl;//char����ĸ��int�����֣�
	ch = ch + 1;
	i = ch;
	cout << ch<<i<<endl;//+1��ĸ����ASCII;
	cout.put(ch);//()��ֻ������һ����ĸ����ʾ���룻
	cout << endl;

	cout << "\aWath's your password?:"<< endl;//\a��ʾ����(�����Ч��)
	long code;//long���ֽڣ�ָ��ʾ�ֽڼ���Χ������滮�ֽ�,code���������˼
	cout << "code:______\b\b\b\b\b\b";//\b���˸����»�������һ�£�������ȫ������
	cin >> code;
	cout << "\aYou entered" << code << "...\n";//����

	return 0;
}