#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
	double time,ph,n,t;
	cin>>time>>ph>>n;
	t=0;
	while(time){
		time--;
		t+=n;
	}
	if(t>ph){
		cout<<"\"PKS has been killed!\"";
	}else{
		cout<<"\"You have been killed by PKS!\"";
	}
}
