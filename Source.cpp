#include <iostream>

using namespace std;

int tong(int a, int b){
	return a + b;
}
int hieu(int a, int b){
	return a - b;
}
int tich(int a, int b){
	return a * b;
}
int ktNguyenTo(int a){
	if(a==2 || a==3)
		return 1;
	else if(a<=1)
		return 0;
	else{
		for(int i=2;i<a;i++)
		{
			if(a%i==0)
				return 0;
		}
	}
	return 1;
}
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";

	int x,y;
	cout << "\nNhap so thu nhat: ";
	cin >> x;
	cout << "Nhap so thu hai: ";
	cin >> y;
	
	cout << "Tong la: " << tong(x,y) << endl;
	cout << "Hieu la: " << hieu(x,y) << endl;
	cout << "Tich la: " << tich(x,y) << endl;
	if(ktNguyenTo(x)==1)
		cout<< x << " la so nguyen to"<<endl;
	else
		cout<< x << " khong la so nguyen to"<<endl;

	return 0;
}