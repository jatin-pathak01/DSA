class Solution {
public:
    char findTheDifference(string s, string t) {
        int XOR=0;
        for(char &ch:s){
            XOR=XOR^ch;
        }
        for(char &ch:t){
            XOR=XOR^ch;
        }
        return (char)XOR;
    }
};