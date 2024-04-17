/*
    Time Complexity : O(n)
    Space Complexity : O(n)
*/
void solve(int i, int j, int n, vector<char> &s)
{
    if (i == (n / 2))
    {
        return;
    }
    swap(s[i], s[j]);
    solve(i + 1, j - 1, n, s);
}
void reverseString(vector<char> &s)
{
    int n = s.size();

    int i = 0, j = n - 1;
    solve(i, j, n, s);
}