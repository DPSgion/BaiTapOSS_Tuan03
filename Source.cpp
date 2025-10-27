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
	cout << "\nNhap so thu nhat: ";
	cin >> x;
	cout << "Nhap so thu hai: ";
	cin >> y;
	
	cout << "Tong la: " << tong(x,y) << endl;
	cout << "Hieu la: " << hieu(x,y) << endl;
	cout << "Tich la: " << tich(x,y) << endl;
	
	cout<<"-------KIỂM TRA SỐ NGUYÊN TỐ----------------\n";
	if(ktNguyenTo(x)==1)
		cout<< x << " la so nguyen to"<<endl;
	else
		cout<< x << " khong la so nguyen to"<<endl;

	cout<<"-------KIỂM TRA SỐ HOÀN THIỆN----------------";
	cout<< "\nNhập số muốn kiểm tra:";
	int a;
	cin>>a;
	if (kiemTraSoHoanThien(a))
	    cout<<a<<"la so hoan thien";
	else 
	    cout << a << " khong phai la so hoan thien" << endl;
	system("pause");
	return 0;
}