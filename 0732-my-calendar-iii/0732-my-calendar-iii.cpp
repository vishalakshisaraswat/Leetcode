class MyCalendarThree {
    map<int , int> m;
public:
    MyCalendarThree() {
        
    }
    
    int book(int startTime, int endTime) {
        int sum=0,result=0;
        m[startTime]++;
        m[endTime]--;

        for(auto i:m){
            sum = sum + i.second;
            result = max(result,sum);
        }
        return result;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */