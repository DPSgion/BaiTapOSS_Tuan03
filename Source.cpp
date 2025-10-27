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

bool kiemTraSoHoanThien(int n){
	if(n<=1) return false;
	int tong = 0;
	for(int i =1 ;i <=n/2;i++){
		if(n%i==0){
			tong = tong +i;
		}
	}
	return tong == n;
}

float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";

	int x,y;
	cout << "Nhap so thu nhat: ";
	cin >> x;
	cout << "Nhap so thu hai: ";
	cin >> y;
	
	cout << "Tong la: " << tong(x,y) << endl;
	cout << "Hieu la: " << hieu(x,y) << endl;
	cout << "Tich la: " << tich(x,y) << endl;
	cout<<"-------KIỂM TRA SỐ HOÀN THIỆN----------------";
	cout<< "Nhập số muốn kiểm tra:";
	int a;
	cin>>a;
	if(kiemTraSoHoanThien(a))cout<<a<<"la so hoan thien";
	else cout<<n<<"khong phai la so hoan thien"<<end;
	system("pause");
	return 0;
}