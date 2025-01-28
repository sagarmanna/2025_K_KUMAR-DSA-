


void plusMinus(const vector<int>& arr) {
    int n = arr.size();
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    // Iterate through the array and count positive, negative, and zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    // Calculate the proportions
    double positiveRatio = static_cast<double>(positiveCount) / n;
    double negativeRatio = static_cast<double>(negativeCount) / n;
    double zeroRatio = static_cast<double>(zeroCount) / n;

    // Print the results with 6 decimal places
    cout << fixed << setprecision(6) << positiveRatio << endl;
    cout << fixed << setprecision(6) << negativeRatio << endl;
    cout << fixed << setprecision(6) << zeroRatio << endl;
}







