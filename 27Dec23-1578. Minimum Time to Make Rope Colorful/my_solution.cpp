class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        vector<vector<int>> b;
        vector<int> c;
        c.push_back(neededTime[0]);
        int max=neededTime[0],sum=0;
        for(int i=1;i<colors.size();i++){
            if(colors[i]==colors[i-1]){
                if(max<neededTime[i]) max=neededTime[i];
                c.push_back(neededTime[i]);
            }
            else{
                auto it = find(c.begin(), c.end(),
                   max);
                if (it != c.end()) {
                    c.erase(it);
                }
                for(int j: c){
                    cout<<j<<" ";
                    sum+=j;
                }
                cout<<endl;
                max=neededTime[i];
                c.clear();
                c.push_back(neededTime[i]);
            }
        }
        if(c.size()!=0){
            auto it = find(c.begin(), c.end(),
                   max);
                if (it != c.end()) {
                    c.erase(it);
                }
                for(int j: c){
                    cout<<j<<" ";
                    sum+=j;
                }
                cout<<endl;
        }
        return sum;
    }
};