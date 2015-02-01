
// sort st to ascending order

void sortSt(stack<int>& st)
{
  stack<int> A, B;
  while(!st.empty()){
    int v = st.peek();
    st.pop();
    A.push(v);
  }
  
  while(!A.empty() || !B.empty()){
    int v = getMin(A, B);
    st.push(v);
  }
  return;
}

int getMin(stack<int>&A, stack<int>&B){
   // 2N to get the min
   int res = A.peek();
   while(!A.empty()){
      int top = A.peek();
      res = min(top, res);
      A.pop();
      B.push(top);
   }
   
   bool found = false;
   while(!B.empty()){
      int top = B.peek();
      if(top == res && found = false){
        found = true;
        continue; // don't put this to A again
      }
      else {
        A.push(top);
      }
   }
   return res;
}
