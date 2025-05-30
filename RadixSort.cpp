#include<bits/stdc++.h>
using namespace std;
int maxElement(vector<int>& nums){
    int n = nums.size();
    int maxElement = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] > maxElement) {
            maxElement = nums[i]; 
        }
    }
    return maxElement;
}
void countsort(vector<int>& nums, int div){
    int n = nums.size();
    vector<int> freq(10, 0);

    for(int i=0; i<n; i++){
        int num = (nums[i]/div)%10;
        freq[num]++;
    }

    for(int i=1; i<=9; i++){
        freq[i] = freq[i] + freq[i-1];
    }

    vector<int> sorted(n);

    for(int i=n-1; i>=0; i--){
        int num = (nums[i]/div)%10;
        int index= --freq[num]; //pehle decrement hoga phir index banega
        sorted[index] = nums[i];
    }
    for(int i=0; i<n; i++){
        nums[i] = sorted[i];
    }
}
void radixSort(vector<int>& nums){
    int mx = maxElement(nums);
    for(int i=1; mx/i > 0; i=i*10){ //iteration for iterating for one's and ten's place and more 
        countsort(nums,i);
    }
}
int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n, val;
        vector<int> nums;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> val;
            nums.push_back(val);
        }
        radixSort(nums);

        for(int i = 0; i < n; i++) {
            cout << nums[i]<< " ";
        }
        cout << endl;
        
    }
    return 0;
}
