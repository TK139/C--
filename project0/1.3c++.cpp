#include<iostream>
int main()
{
	using namespace std;
	int dollar = 5;
	cout << "我有" << dollar << "dollar";
	cout << endl;//跟\n一个原理另起一行
	dollar = dollar + 10;
	cout << dollar;
	cout << endl;
	cout << endl;
	//声明变量做参值
	//一个有趣的辨别：打双引号的表示你要输入的东西，不打表示你声明的变量
	//和C及其相似

	//cin输出
	int count;
	cout<<"甲：" << "我有一个想法，想开发一款自己的游戏\n";
	cout << "我需要一个团队人数：";
	cin >> count; 
	//我还想弄明白如何让输出的东西插在一句话中，而不是另起一行

	return 0;
	//未完待续...
}