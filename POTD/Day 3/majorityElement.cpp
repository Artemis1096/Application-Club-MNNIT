// majority element using voting algorithm
int majorityElement(vector<int>& nums) {
        int count=0,can=0,n=nums.size(); //can stores the majority element 
        for(int i=0;i<n;i++){
            if(count==0){
                can=nums[i];
                //if count is zero then we store that element in can
            }
            if(nums[i]==can){
                count++;
                // calculates its frequency
            }else{
                count--;
                // decrementes the count if can not found
            }
            // this algorithm assumes that the majority element should take majority size of the array 
            // so even after we try to reduce its count it will still remain greater than 0
        }
        return can;
    }