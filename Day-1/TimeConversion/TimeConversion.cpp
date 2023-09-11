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
    std::string res = s;
    
    size_t pos = s.find("PM");
    int hours = std::atoi(s.substr(0, 2).c_str());
    
    //std::cout << "HOURS = " << hours << std::endl;
    //std::cout << "POS " << pos << std::endl;
    
    if (pos != s.npos)
    {
        res.erase(res.size() - 2);
        if (hours + 12 < 24)
            res.replace(0, 2, std::to_string(hours + 12));
        //std::cout << "S WITHOUT PM = " << res << std::endl;

    }
    else
    {
        if (hours == 12)
            res.replace(0, 2, "00");
        res.erase(s.size() - 2);
        //std::cout << "RES = " << res << std::endl;
    }
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
