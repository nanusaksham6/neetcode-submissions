class MinStack {
public:
stack<int> s1;
    stack<int> minstack;

    MinStack() {
        
    }
    
    void push(int val) {
       s1.push(val) ;
       if(minstack.empty()||val<=minstack.top()){
        minstack.push(val);
       }
    }
    
    void pop() {
     int curr=s1.top();
     s1.pop();
     if(curr==minstack.top()){
        minstack.pop() ;
           }   


    }
    
    int top() {
       return s1.top(); 
    }
    
    int getMin() {
       return minstack.top(); 
    }
};
