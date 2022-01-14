//11.Generate Binary Numbers
// https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/1/

vector<string> generate(int N)
{
	// Your code here
	vector<string> ans;
	int i=1;
	while(i <= N) {
	    int a = i;
	    string s="";
	    while(a) {
	        s = to_string(a%2) + s;
	        a /= 2;
	    }
	    ans.push_back(s); 
	    i++;
	}
	return ans;
}
