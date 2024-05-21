class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> v = score ;
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        unordered_map <int,string> m;
        for(int i=0; i<v.size(); i++){
            if(i == 0){
                m.insert(make_pair(v[i],"Gold Medal"));
            }
            else if(i == 1){
                m.insert(make_pair(v[i],"Silver Medal"));
            }
            else if(i == 2){
                m.insert(make_pair(v[i],"Bronze Medal"));
            }
            else{
                m.insert(make_pair(v[i],to_string(i+1)));
            }
        }
        vector<string> ans;
        for(int i=0; i<v.size(); i++){
            unordered_map <int,string> ::iterator k;
            k = m.find(score[i]);
            ans.push_back(k->second);
        }
        return ans;
    }
};