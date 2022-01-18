//8.ATOI 
//https://practice.geeksforgeeks.org/problems/implement-atoi/1/

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int ans=0, sign=1;
        for(int i=0; i<str.size(); i++) {
            if(ans == 0 && str[i] == '-' || str[i] == '+') {
                sign = str[i] == '-' ? -1 : 1;
            }
            else if(str[i] == ' ') {
                continue;
            }
            else if(isdigit(str[i])){
                ans = ans*10 + (str[i]-'0');
            }
            else {
                return -1;
            }
        }
        return sign*ans;
    }
};
