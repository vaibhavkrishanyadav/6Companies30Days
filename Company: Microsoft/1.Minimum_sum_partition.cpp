//1.Minimum sum partition
//https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1/

class Solution{
  public:
    map<pair<int,int>,int> mp;
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int s1=0, s2=0;
	    sort(arr, arr+n);
	    return helper(arr, n, s1, s2);
	} 
	
	int helper(int arr[], int n, int s1, int s2){
        if(n<=0){
            return abs(s1-s2);
        }
        if(mp.find({s1, s2}) != mp.end()){
            return mp[{s1, s2}];
        }
        return mp[{s1, s2}] = min(helper(arr, n-1, s1, s2+arr[n-1]), helper(arr, n-1, s1+arr[n-1], s2));
    }
};
