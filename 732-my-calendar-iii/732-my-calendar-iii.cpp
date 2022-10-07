class MyCalendarThree {
public:
    map<int,int>mp;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int ans=0,maxx=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            ans+=it->second;
            maxx=max(ans,maxx);  
        }
        return maxx;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */