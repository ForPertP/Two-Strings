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
