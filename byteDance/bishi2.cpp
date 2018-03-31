#include <bits/stdc++.h>

using namespace std;

struct Node {
    int s, m, cnt;
    Node() {}
    Node(int s, int m, int cnt) : s(s), m(m), cnt(cnt) {}
};

#define MAX_SIZE 10000

int main()
{
    vector<int> ans(MAX_SIZE, -1);
    queue<Node> que;
    Node aNode = {1,1,0};
    que.push(aNode);
    // que.emplace(1, 1, 0);
    while (!que.empty()) {
        auto now = que.front();
        que.pop();

        if (ans[now.s] == -1)
            ans[now.s] = now.cnt;

        if (now.s * 2 < MAX_SIZE)
            que.emplace(now.s * 2, now.s, now.cnt + 1);
        if (now.s + now.m < MAX_SIZE)
            que.emplace(now.s + now.m, now.m, now.cnt + 1);
    }
    for (int n; cin >> n; cout << ans[n] << endl) {}
    return 0;
}
