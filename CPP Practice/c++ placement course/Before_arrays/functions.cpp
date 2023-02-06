#include <bits/stdc++.h>
using namespace std;
void pythogorontriplet()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ch = max(a, max(b, c));
    if (2 * (ch * ch) == (a * a + b * b + c * c))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}
void b2d()
{
    string s;
    cin >> s;
    int dec = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        dec += (s[i] - 48) * pow(2, s.size() - i - 1);
    }
    cout << dec;
}
void h2d()
{
    string s;
    cin >> s;
    int dec = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] <= '9' && s[i] >= '0')
        {
            dec += (s[i] - 48) * pow(16, s.size() - i - 1);
        }
        else
        {
            dec += (s[i] - 'A' + 10) * pow(16, s.size() - i - 1);
        }
    }
    cout << dec;
}
void d2h()
{
    int dec;
    cin >> dec;
    int x = 1;
    string ans = "";
    while (x <= dec)
    {
        x *= 16;
    }
    x /= 16;
    while (x > 0)
    {
        int bit = dec / x; // collecting quotients to get msb's
        dec = dec % x;
        x /= 16;
        if (bit <= 9)
        {
            ans += to_string(bit);
        }
        else
        {
            char s = 'A' - 10 + bit;
            ans.push_back(s);
        }
    }
    cout << ans;
}
void myd2h(int dec)
{
    string ans = "";
    int d = 16; // unnecessary because d is uunchaned here or can be used as a place holder
    while (dec > 0)
    {
        int bit = dec % d; // collecting remainders to get lsb's
        dec = dec / d;
        if (bit <= 9)
            ans = char('0' + bit) + ans;
        else
        {
            ans = char('A' - 10 + bit) + ans;
        }
    }
    cout << ans;
}
void addBinary()
{
    string a, b;
    cin >> a >> b;

}
int main()
{
    // pythogorontriplet();
    // d2h();
    // myd2h(80);
    addBinary(); // incomplete code
    return 0;
}