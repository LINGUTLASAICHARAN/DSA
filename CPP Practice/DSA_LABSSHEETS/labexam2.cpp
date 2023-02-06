#include<bits/stdc++.h>
int main()
{
    int n;
    std::cin >> n;
    int ans = 0;
    std::stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int current_element;
        std::cin >> current_element;
        // FILL IN CODE HERE
        if(! st.empty() && current_element > st.top()){
           ans = std:: max(ans , (int) st.size());
           while (!st.empty())          
           {
               st.pop();
           }
        }
        st.push(current_element);
        
    }
    ans = std::max(ans, (int)st.size());
    std::cout << ans << std::endl;
}