//9.Next higher palindromic number using the same set of digits
//https://practice.geeksforgeeks.org/problems/next-higher-palindromic-number-using-the-same-set-of-digits5859/1/

class Solution{
  public:
    string nextPalin(string N) { 
        //complete the function here
        if(N.size() <= 3) {
            return "-1";
        }
        int n = N.size(), m=n/2, i, j;
        string h = N.substr(0, m);
        for (i = m - 2; i >= 0; i--) {
            if (h[i] < h[i + 1]) {
                break;
            }
        }
    	if (i < 0) {
    	    return "-1";
    	} 
    	else {
    	    for (j = m - 1; j > i; j--) {
                if (h[j] > h[i]) {
                    break;
                }
            } 
    	    swap(h[i], h[j]);
    	    reverse(h.begin() + i + 1, h.end());
        }
        string ans = h;
        if(n % 2 == 1) {
            ans += N[m];
        }
        reverse(h.begin(), h.end());
        ans += h;
        return ans;
    }
};
