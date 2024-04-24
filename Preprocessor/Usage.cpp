/* Enter your macros here */
#define INF 10000000
#define io(v) cin>>v
#define toStr(str) #str
#define foreach(v, i) for(int i = 0; i < v.size(); ++i)
#define FUNCTION(name, op) void name(int &a, int b){if(!(a op b)) a = b;}

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}

// macros are code snippet executed by the preprocessor before compitation of whole code there are multiple functions in it Referance: http://www.cplusplus.com/doc/tutorial/preprocessor/ 
// before code is executed the FUNCTION(minimum, <) is replaced with void name(int &a, int b){if(!(a op b)) a = b;} observe in above code.
