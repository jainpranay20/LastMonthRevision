class Solution {
public:
    int maxArea(vector<int>& height) {
        
        // on2 hamko max water nikalana hai 
        //trapping rain water m width hoti hai
        // isme width zero hai
        
        //on
        int i=0,j=height.size()-1,water=0;
        while(i<j)
        {
            water=max(water,min(height[i],height[j])*(j-i));
            //cout<<water<<" ";
            if(height[i]>height[j])
                j--;
            else
                i++;
                
        }
        return water;
        
        
        //on2 tle h yeh
        // int water=0;
        // for(int i=0;i<height.size()-1;i++)
        // {
        //     for(int j=i+1;j<height.size();j++)
        //     {
        //         water=max(water,(j-i)*min(height[j],height[i]));
        //     }
        // }
        // return water;
    }
};