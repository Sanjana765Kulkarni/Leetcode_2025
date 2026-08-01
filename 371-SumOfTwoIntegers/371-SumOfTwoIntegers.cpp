// Last updated: 01/08/2026, 23:22:08
class Solution {
public:
   int getSum(int a, int b) {
    while (b != 0) {
        unsigned int carry = a & b; 
        a = a ^ b;                  
        b = carry << 1;            
    }
    return a;
}
};