//4. Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string. 
//eg if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6″.
//https://practice.geeksforgeeks.org/problems/run-length-encoding/1/

string encode(string src)
{     
  string s="";
  int n=src.size(), c=0;
  for(int i=0; i<n; i++) {
      c++;
      if(i == n-1 || src[i] != src[i+1]) {
          s += src[i] + to_string(c);
          c=0;
      }
  }
  return s;
}
