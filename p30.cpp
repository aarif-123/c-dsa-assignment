// Day - 30 Questions - Week-07 (September 25th, 2024)
// Ques 1. Write C++ program that take an array of size n from the user and the array contains both positive and negative number. Your task is to calculate the maximum sum of subarray. Print the maximum sum value.
// Input : - n=9 array =-2,1,-3,4,-1,2,1,-5,4
// Output:- 6
// Explanation The subarray [4,-1,2,1] has the largest sum 6.

// Ques 2. In an array, the next greater element for a given element x is defined as the first element to the right of x that is larger than x.

// You are provided with two distinct 0-indexed integer arrays, nums1 and nums2, where nums1 is a subset of nums2.

// For each element in nums1, find its corresponding position in nums2, and then identify the next greater element that appears to the right of it in nums2. If no such element exists, return -1 for that element.

// Your task is to return an array ans, where each element ans[i] represents the next greater element for nums1[i] as found in nums2. If no next greater element is found, the corresponding entry in ans should be -1. Note all the required input from the user.
// Sample :- n1=3 , n2 =4 nums1 = [4,1,2], nums2 = [1,3,4,2]
// Output :- [-1,3,-1].
// Explanation :- The next greater element for each value of nums1 is as follows:
// - 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
// - 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
// - 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.




#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Function to calculate the maximum sum of a subarray
int maxSubarraySum(vector<int>& arr) {
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int num : arr) {
        currentSum += num;
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maxSum;
}

// Function to find the next greater element for each element in nums1
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> st;
    unordered_map<int, int> nextGreater;

    for (int num : nums2) {
        while (!st.empty() && st.top() < num) {
            nextGreater[st.top()] = num;
            st.pop();
        }
        st.push(num);
    }

    vector<int> ans;
    for (int num : nums1) {
        ans.push_back(nextGreater.count(num) ? nextGreater[num] : -1);
    }

    return ans;
}

int main() {
    // Ques 1
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxSum = maxSubarraySum(arr);
    cout << "Maximum sum of subarray: " << maxSum << endl;








    // Ques 2



    int n1, n2;
    cout << "Enter the size of nums1 and nums2: ";
    cin >> n1 >> n2;

    vector<int> nums1(n1), nums2(n2);
    cout << "Enter elements of nums1: ";
    for (int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }
    cout << "Enter elements of nums2: ";
    for (int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }

    vector<int> ans = nextGreaterElement(nums1, nums2);
    cout << "Next greater element for each element in nums1: ";
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}