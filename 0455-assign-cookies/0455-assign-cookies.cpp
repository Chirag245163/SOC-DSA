class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int greed=0;
        int ans=0;
        int size=0;
        while(size<s.size()&&greed<g.size()){
            if(g[greed]<=s[size]){
                ans++;
                size++;
                greed++;
            }
            else{
                size++;
            }
        }
        return ans;
    }
};