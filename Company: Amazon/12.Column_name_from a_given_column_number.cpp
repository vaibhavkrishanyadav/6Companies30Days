//12.Column name from a given column number
//https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1

class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string s = "";
        while(n) {
            char ch = 'A' + (n-1) % 26;
            n = (n-1)/26;
            s = ch + s; 
        }
        return s;
    }
};
