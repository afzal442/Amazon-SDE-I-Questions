#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



/*
 * Complete the 'findRestaurants' function below.
 *
 * The function is expected to return a 2D_INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. 2D_INTEGER_ARRAY allLocations
 *  2. INTEGER numRestaurants
 */

vector<vector<int>> findRestaurants(vector<vector<int>> allLocations, int numRestaurants) {

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string allLocations_rows_temp;
    getline(cin, allLocations_rows_temp);

    int allLocations_rows = stoi(ltrim(rtrim(allLocations_rows_temp)));

    string allLocations_columns_temp;
    getline(cin, allLocations_columns_temp);

    int allLocations_columns = stoi(ltrim(rtrim(allLocations_columns_temp)));

    vector<vector<int>> allLocations(allLocations_rows);

    for (int i = 0; i < allLocations_rows; i++) {
        allLocations[i].resize(allLocations_columns);

        string allLocations_row_temp_temp;
        getline(cin, allLocations_row_temp_temp);

        vector<string> allLocations_row_temp = split(rtrim(allLocations_row_temp_temp));

        for (int j = 0; j < allLocations_columns; j++) {
            int allLocations_row_item = stoi(allLocations_row_temp[j]);

            allLocations[i][j] = allLocations_row_item;
        }
    }

    string numRestaurants_temp;
    getline(cin, numRestaurants_temp);

    int numRestaurants = stoi(ltrim(rtrim(numRestaurants_temp)));

    vector<vector<int>> result = findRestaurants(allLocations, numRestaurants);

    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            fout << result[i][j];

            if (j != result[i].size() - 1) {
                fout << " ";
            }
        }

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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
