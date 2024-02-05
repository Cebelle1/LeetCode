bool isPalindrome(int x) {
    if (x<0) return false;
    if(x/10 == 0) return true;

    unsigned int num=0;
    unsigned int reverse =0;
    unsigned int temp = x;
    //reverse the entire number
    while(x>0){
        reverse = reverse*10 + x%10; 
        x = x/10; 
    
    }

    if (reverse==temp) return true;
    else return false;
    
}