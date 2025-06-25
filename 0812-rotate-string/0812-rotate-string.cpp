class Solution{
    public:
      bool rotateString( string s, string goal){
        if(s.length() != goal.length())
        return false;

        string s3 = s+s;
        return (s3.find(goal) != string :: npos); 
      }
};
