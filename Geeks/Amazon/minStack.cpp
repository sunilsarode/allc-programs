struct Data{

   int minel;
   int el;
};

stack<Data> st;

MinStack::MinStack() {
    st.clear(); 
    
}

void MinStack::push(int x) {
    
    if(st.empty()){
         Data d;
         d.minel=x;
         d.el=x;
    }else{
          Data d=st.top();
          if(d.minel<x){
              Data newd;
              newd.minel=d.minel;
              newd.el=x;                        
              st.push(newd);
          }else{
              Data newd;
              newd.minel=x;
              newd.el=x;
              st.push(newd);
          }
    }
}

void MinStack::pop() {
    if(!st.empty()){
        st.pop();;
    }
}

int MinStack::top() {
    if (st.empty()){
        return -1;

    }
    return st.top().el;
}   

int MinStack::getMin() {
    if(st.empty()){
        return -1;
    }else{
       Data ind=st.top();
       return ind.minel;   
    }
       
}


