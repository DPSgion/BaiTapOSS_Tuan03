#include <iostream>

using namespace std;

int tong(int a, int b){
	return a+b;
}

int hieu(int a, int b){
	return a-b;
}

int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";

	cout<<"Nguyen Trong Tin";
	int x,y;
	cout<<"Nhap so thu nhat: ";
	cin>>x;
	cout<<"Nhap so thu hai: ";
	cin>>y;
	
	cout<< "Tong la:" << tong(x,y)<<endl;

	cout<<"Hieu :";

	cout<< "Hieu la:"<< hieu(x,y) <<endl;



	system("pause");
	return 0;
}