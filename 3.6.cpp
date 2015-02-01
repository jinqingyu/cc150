
/*
Great example of simple code. 
*/

// sort st to ascending order
stack<int> sort(stack<int> st)
{
  stac<int> res;
  while(!st.empty()){
    int v = st.top(); 
    st.pop();
    while(!res.empty() && res.top()>v){
      int t = res.top(); 
      res.pop();
      st.push(t);
    }
    // don't need to pop back those elements.
    // they will be popped back from st to res automatically.
    res.push(v);
  }
  return res;
}
