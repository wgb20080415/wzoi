#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main() {
	double n,a[100],s;
	cin>>n;
	for(int i=1;i<=n;i++)	cin>>a[i];
	for(int i=1;i<=n;i++)	s+=a[i];
	s/=n;
	printf("%.2f",s);
}
