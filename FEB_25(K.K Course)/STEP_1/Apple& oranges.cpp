void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    size_t i;
for(i = 0; i < apples.size(); i++)
        apples[i] += a;
   
    for(i = 0; i < oranges.size(); i++)
        oranges[i] += b;


    int cnt1 = 0, cnt2 = 0;
   
    for(i = 0; i < apples.size(); i++) {
        if(apples[i] >= s && apples[i] <= t)
            cnt1++;
    }


    for(i = 0; i < oranges.size(); i++) {
        if(oranges[i] >= s && oranges[i] <= t)
            cnt2++;
    }


    cout << cnt1 << endl;  // Fix output syntax
    cout << cnt2 << endl;
}
