class Solution {
public:
    bool isValid(string s) {
      stack<char>str;
      for(int i=0;i<s.length();i++){
          char ch=s[i];
          //opening
          if(ch=='(' || ch=='{' || ch=='['){
              str.push(ch);
          }
          //check for closing
          else{
              if(!str.empty()){
                  char top=str.top();
                  if((ch==')' && top=='(') ||
                    (ch=='}' && top=='{') ||
                    (ch==']' && top=='['))
                  {  str.pop(); }
                  else{
                      return false;
                  }
                  
              } 
              // stack empty hai toh false hi hoga 
              else{
                  return false;
              }
          }
         
      }
       if(str.empty ()){
            return true;
        }
       else{
            return false;
        }
        
    }
};