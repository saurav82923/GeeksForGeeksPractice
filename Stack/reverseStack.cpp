class Solution{
public:
    vector<int> Reverse(stack<int> St){
        vector<int> ans;
        while(!St.empty()){
            ans.push_back(St.top());
            St.pop();
        }
        return ans;
    }
};