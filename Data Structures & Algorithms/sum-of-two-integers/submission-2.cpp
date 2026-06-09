class Solution{
public:
    int getSum(int a,int b){
        int carry = 0;
        while(b){ //as long as there is a carry coz, the carry is stored in b
            carry = a&b;
            a = a^b;
            b = carry<<1;
        }
        return a;
    }
};
