class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int smallest=INT_MAX;
        int second_smallest=INT_MAX;
        for(int &price:prices){
            if(price<smallest){
                second_smallest=smallest;
                smallest=price;
            }
            else{
                second_smallest=min(price,second_smallest);
            }
        }
        if(smallest+second_smallest>money){
            return money;
        }
        return money-(smallest+second_smallest);
    }
};