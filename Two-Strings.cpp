#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'twoStrings' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

string twoStrings(string s1, string s2)
{
    string result{ "NO" };
    std::unordered_map<char, int> um_words;

    for (auto& it : s1)
    {
        um_words[it]++;
    }

    for (auto& it : s2)
    {
        if (um_words[it] > 0)
        {
            result = "YES";
            break;
        }
    }

    return result;
}
