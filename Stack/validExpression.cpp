#include<iostream>
#include<stack>
using namespace std;

int main(){
    string exp = "[()]{}{[()()](";

    stack<char> st;

    for(int i = 0; i < exp.length(); i++){
        char ch = exp[i];

        if(ch == '[' || ch == '(' || ch == '['){
            st.push(ch);
        }
        else{

            if(st.empty() == false){
                
                char top = st.top();

                if(ch == ')' && top == '(' || ch == ']' && top == '[' || ch == '}' && ch == '{'){
                    st.pop();
                }
                // else{
                //     cout<<"Unbalanced"<<endl;
                // }
            // }
            // else{
            //     cout<<"Unbalanced"<<endl;
            // }

        }
    }
    }
    
    if(st.empty() == true){
        cout<<"Balanced"<<endl;
    }else{
        cout<<"Unbalanced"<<endl;
    }

    return 0;
}
