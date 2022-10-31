#include <bits/stdc++.h>
using namespace std;
int main(){
	int testcases;cin>>testcases;
	while(testcases--){
		int n;cin>>n;
		int mid=n/2;mid++;
		bool turn = true;
		int left=1, right=mid;
		for(int i=0;i<n;i++){
			if(turn){
				cout<<right<<" ";right++;
			}
			else{
				cout<<left<<" ";left++;
			}
			turn=!turn;
		}cout<<"\n";
	}
	return 0;
}