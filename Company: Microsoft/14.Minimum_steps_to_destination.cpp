//14. Minimum steps to destination
// https://practice.geeksforgeeks.org/problems/minimum-number-of-steps-to-reach-a-given-number5234/1/

class Solution{
public:
    int minSteps(int D){
        // code here
        int c = 0, sum = 0;
        while(true){
            sum = sum + c;
            if(sum == D){
                return c;
            }
            if(sum > D and (sum-D)%2 == 0){
                return c;
            }
            c++;
        }
        return 0;
    }
};
