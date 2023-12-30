class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int> vars;
        for(string i:words){
            for(char j:i){
                if(vars[j]){
                    vars[j]++;
                }
                else{
                    vars[j]=1;
                }
            }
        }
        for(auto i:vars){
            if(i.second%words.size()!=0){
                return false;
            }
            
        }
        return true;
    }
};