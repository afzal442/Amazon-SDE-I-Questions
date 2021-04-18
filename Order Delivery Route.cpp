#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



/*
 * Complete the 'minimumDistance' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY area as parameter.
 */

int minimumDistance(vector<vector<int>> area) {

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string area_rows_temp;
    getline(cin, area_rows_temp);

    int area_rows = stoi(ltrim(rtrim(area_rows_temp)));

    string area_columns_temp;
    getline(cin, area_columns_temp);

    int area_columns = stoi(ltrim(rtrim(area_columns_temp)));

    vector<vector<int>> area(area_rows);

    for (int i = 0; i < area_rows; i++) {
        area[i].resize(area_columns);

        string area_row_temp_temp;
        getline(cin, area_row_temp_temp);

        vector<string> area_row_temp = split(rtrim(area_row_temp_temp));

        for (int j = 0; j < area_columns; j++) {
            int area_row_item = stoi(area_row_temp[j]);

            area[i][j] = area_row_item;
        }
    }

    int result = minimumDistance(area);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
