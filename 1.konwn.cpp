// string to number convert--->
string a = "12345342";
int num = stoi(a);
// add two string in one;
d.insert(d.end(), a.begin(), a.end());
d.insert(d.end(), b.begin(), b.end());
// rearrange a string
sort(d.begin(), d.end());
sort(c.begin(), c.end());

// compare two string
if (c.compare(d) == 0)
{
    cout << "YES\n";
}
else
{
    cout << "NO\n";
}
//|  | use
int x = abs(2 - 9);
// total upper value find.
ans = lower_bound(a, a + n, k) - a;