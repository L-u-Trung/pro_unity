#include<bits/stdc++.h>
using namespace std;
class cong{
	int A;
	int B;
	public: 
	int tong();
	void nhap();
	void in();
};
void cong::nhap(){
	cin>>A>>B;
}
int cong::tong(){
	return A+B;
}
void cong::in(){
	cout<<tong();
}
int main(){
	cong a;
	a.nhap();
	a.in();
}


