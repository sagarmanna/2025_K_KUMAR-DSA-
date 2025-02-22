int getTotalX(vector<int> a, vector<int> b) {
    int st = *max_element(a.begin(), a.end());
    int ed = *min_element(b.begin(), b.end());
    int cnt = 0;

    for(int i = st; i <= ed; i++) {
        bool flag1 = false;

        for(size_t j = 0; j < a.size(); j++) {
            if(i % a[j] != 0) {
                flag1 = true;
                break;
            }
        }

        if(!flag1) {
            bool flag2 = false;

            for(size_t k = 0; k < b.size(); k++) {
                if(b[k] % i != 0) {
                    flag2 = true;
                    break;
                }
            }

            if(!flag2) cnt++;
        }
    }

    return cnt;  // Moved outside the loop
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    string brr_temp_temp;
    getline(cin, brr_temp_temp);

    vector<string> brr_temp = split(rtrim(brr_temp_temp));

    vector<int> brr(m);

    for (int i = 0; i < m; i++) {
        int brr_item = stoi(brr_temp[i]);

        brr[i] = brr_item;
    }

    int total = getTotalX(arr, brr);

    fout << total << "\n";

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