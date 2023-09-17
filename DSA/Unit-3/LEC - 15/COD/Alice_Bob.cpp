// Alice_Bob

#include <iostream>
#include <stack>
using namespace std;ḍ

int main(){

    string s;
    stack<char> st;

    getline(cin,s);

   for(auto i:s){
    st.push(i);
   }

   while(!st.empty()){
    cout<<st.top();
    st.pop();
   }

    return 0;
}