//7.First non-repeating character in a stream
//https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    vector<int> a(26, 0);
		    queue<char> q;
		    for(auto &i: A) {
		        if(++a[i-'a'] == 1) {
		            q.push(i);
		        }
		        while(!q.empty() && a[q.front()-'a'] > 1) {
		            q.pop();
		        }
		        if(q.empty()) {
		            i = '#';
		        }
		        else {
		            i = q.front();
		        }
		    }
		    return A;
		}

};
