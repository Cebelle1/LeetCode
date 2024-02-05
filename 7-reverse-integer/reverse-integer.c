int reverse(int x){
    bool negative = x<0?true:false;
    int remainder =0;
    int temp =x;
    double reverse =0;

    if (x >= 2147483647 || x<=-2147483648) {
        return 0; //max/min value for 2^31 int size
    }

    if (negative){
        x = x *-1;   //convert to positive first
    }
    

    while (x>0){
        if(reverse > 214748364.7) return 0; //to ensure the next multiplcation does not exceed
        reverse = reverse * 10 + x%10;
        x /=10;
    }
    
    if(negative) return reverse*-1;
    else return reverse;
}