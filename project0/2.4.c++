#include<iostream>
#define ZERO 0
#include<climits>
int main()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;
	cout << sam<<endl;//short�����ֵ��32767
	sam = sam + 1;//sam�����ֵ����32767�������ڼ�1�Ļ�����������������������ȡ���Ұ��������Ӽ�������+2Ϊ32767��+3Ϊ32766
	sue = sue + 2;//sueΪ��������
	cout << sam <<"," << sue<<endl;
	sam = ZERO;
	sue = ZERO;//д0ͬ��
	cout << sam << "," << sue << endl;
	sam = sam -1;//sam��Ϊ0��-1��+1Ϊ1����������
	sue = sue -1;//sue��ͬ������+1Ϊ�������㣬��-1�ͱ����65535��-2Ϊ65534
	cout << sam << "," << sue << endl;

	return 0;
}