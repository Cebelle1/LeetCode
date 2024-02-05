int maxArea(int* height, int heightSize) {
    int maxArea = -1;
    int area = 0;
    int left = 0;
    int right = heightSize -1;

    //two pointer approach, reducing the width at every step

    while(left < right){
        area = abs(left-right) * fmin(height[left],height[right]);
        if(area > maxArea) maxArea = area;
        
        //find a possibly taller wall
        if(height[left] < height[right]){
            left++; 
        }else {
            right--;    
        }

    }
    return maxArea;
}


//O(n^2) :(
/*int maxArea(int* height, int heightSize) {
    int areaAr[heightSize];
    int maxArea = -1;
    int area =0;
    for(int i=0; i<heightSize;i++){
        for(int j=i+1; j<heightSize; j++){
            //abs(i-j) is width, min of the height
            area = abs(i-j) * fmin(height[i],height[j]);
            if (area > maxArea) maxArea = area;
            
        }
        areaAr[i] = maxArea;
    }
    maxArea =-1;
    area =0;
    for(int k=0; k<heightSize; k++){
        printf("%d ", areaAr[k]);
        area = areaAr[k];
        if (area > maxArea) maxArea = area;
    }
    return maxArea;
}*/