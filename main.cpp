#include<bits/stdc++.h>
using namespace std;
// t=number of test cases
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    stack<int> st;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        st.push(a[i]);
	    }
	    for(int i=0;i<n;i++){
	        int x=st.top();
	        cout<<x<<" ";
	        st.pop();
	    }
	    cout<<endl;
	}
	return 0;
}
