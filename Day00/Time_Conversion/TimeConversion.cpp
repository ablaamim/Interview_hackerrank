#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    std::string hours_val = s.substr(0, 2);
    int conversion = stoi(hours_val);
    size_t pos = s.find("PM");
    if (pos != string::npos)
    {
        if (conversion + 12 < 24)
            hours_val = to_string(conversion + 12);
    }
    else {
        if (conversion == 12)
            hours_val = "00";
    }
    std::string res = s.replace(0, 2, hours_val).erase(s.size() - 2);
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

