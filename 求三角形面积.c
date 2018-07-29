#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
	double a,b,c,s,p;
	cin>>a>>b>>c;
	if(a+b<=c || a+c<=b || b+c<=a){
		cout<<"Can't"<<endl;
	}else{
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("%.2f",s);
	}
}
