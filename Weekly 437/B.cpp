class Solution {
public:
    typedef long long ll;
    long long maxWeight(vector<int>& pizzas) {
        sort(pizzas.rbegin(), pizzas.rend());
        long long total = 0, i=0;
        ll cnt=pizzas.size()/4;
        ll odd=(cnt+1)/2;
        ll even=cnt/2;
        
        while(i<odd) total+=pizzas[i], i++, cnt--;
        i++;

        while(cnt) total+=pizzas[i], i+=2, cnt--;
        
        return total;
    }
};

