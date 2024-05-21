class MyCalendarTwo {
    map<int, int> m;
public:
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        int sum=0;
        m[start]++;
        m[end]--;
        for(auto i:m){
            sum = sum + i.second;
            if(sum>=3){
                m[start]--;
                m[end]++;
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */