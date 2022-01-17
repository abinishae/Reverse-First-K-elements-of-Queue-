#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    queue<int> s = q;
    queue<int> a;
    stack<int> d;
     queue<int> h;
    for(int i=0; i<k; i++){
       d.push(s.front());
       s.pop();
       }
       
       
       for(int i=0; i<k; i++){
       a.push(d.top());
       d.pop();
       }
       while(! s.empty()){
       h.push(s.front());
       s.pop();
       }
       while(! h.empty()){
       a.push(h.front());
       h.pop();
       
     //  cout<<a.front();
       }
       
    return a;
    
}
