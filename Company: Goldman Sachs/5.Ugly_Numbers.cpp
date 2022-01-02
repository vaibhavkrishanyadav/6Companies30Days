//5. Program to find Nth Ugly Number.
//https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/

class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    set<ull> s;
	    s.insert(1);
	    while(--n) {
	        auto i = s.begin();
	        s.insert(*i * 2);
	        s.insert(*i * 3);
	        s.insert(*i * 5);
	        s.erase(i);
	    }
	    return *s.begin();
	}
};
