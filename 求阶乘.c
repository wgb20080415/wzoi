#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main() {
	unsigned long long n,t=1;
	cin>>n;
	if(n==0)	cout<<"1";
	else {
		for(int i=1; i<=n; i++) {
			t*=i;
		}
		cout<<t;
	}

}
