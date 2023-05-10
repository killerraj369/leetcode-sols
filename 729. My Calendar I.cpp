class MyCalendar {
public:
    map<int,int> x; // {end,start}
    MyCalendar() {
        
    }
    
    bool book(int start, int end) 
    {
      // The start should be smaller than the next intervals end and the current end should 
      // be smaller than the next interval start.

       auto i=x.upper_bound(start);
       if(i==x.end() ||end<=i->second)
       {
          x[end]=start;
          return true;
       }
       else return false;

    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */