class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int cnt=0;
        int n=colors.size();
        vector<int>v(n+2);
        for(int i=0;i<n;i++) v[i]=colors[i];
        v[n]=v[0], v[n+1]=v[1];
        
        for(int i=1;i+1<n+2;i++){
            if(v[i-1]==v[i+1] and v[i-1]!=v[i]){
                cnt++;
            }
        }
        return cnt;
        
    }
};
