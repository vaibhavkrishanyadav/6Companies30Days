//10.Nuts and Bolts Problem
//https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1

class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    map<char, int> mp1, mp2;
	    for(int i=0; i<n; i++) {
	        mp1[nuts[i]]++;
	        mp2[bolts[i]]++;
	    }
	    int i=0;
	    for(auto &it: mp1) {
	        while(it.second--) {
	            nuts[i++] = it.first;
	        }
	    }
	    i=0;
	    for(auto &it: mp2) {
	        while(it.second--) {
	            bolts[i++] = it.first;
	        }
	    }
	}

};
