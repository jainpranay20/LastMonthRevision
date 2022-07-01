class MyStack {
public:
    queue<int> q1;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
        int n=q1.size()-1;
        while(n--)
        {
            q1.push(q1.front());
            q1.pop();
        }
        
    }
    
    int pop() {
        int a=q1.front();
        q1.pop();
        return a;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        if(!q1.empty())
            return false;
        return true;
    }
};

/** using 2 queue;

queue<int> q2;
    queue<int> q1;
    MyStack() {
        
    }
    
    void push(int x) {
       q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    Removes the element on top of the stack and returns that element. 
    int pop() {
        int x = q1.front();
        q1.pop();
        return x;
    }
    
    ///** Get the top element. 
    int top() {
         return q1.front();
    }
    
   // /** Returns whether the stack is empty. 
    bool empty() {
        if(q1.empty())
            return true;
        return false;
    }
};


 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */