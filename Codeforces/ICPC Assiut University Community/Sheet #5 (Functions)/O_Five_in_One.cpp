#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n==1) return false;
    for(int i=2; i<n; i++){
        if(n%i==0) return false;
    }
    return true;
}

bool isPalindrome(int n){
    string s = to_string(n);
    string r = s;
    reverse(r.begin(), r.end());
    return s==r;
}

int countDivisors(int num) {
    if (num == 1) return 1;
    int count = 2;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            if (i * i == num) {
                count++;
            } else {
                count += 2;
            }
        }
    }
    return count;
}

int getMaxDivisorsNumber(const vector<int>& arr) {
    int maxDivisors = -1;
    int result = -1;
    for (int num : arr) {
        int divisors = countDivisors(num);
        if (divisors > maxDivisors) {
            maxDivisors = divisors;
            result = num;
        } else if (divisors == maxDivisors) {
            if (num > result) {
                result = num;
            }
        }
    }
    return result;
}

int main(){

    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int mini = INT_MAX, maxi = INT_MIN;
    int prime = 0, palindrome = 0;

    for(int i=0; i<n; i++){
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
        if(isPrime(arr[i])) prime++;
        if(isPalindrome(arr[i])) palindrome++;
    }

    cout<<"The maximum number : "<<maxi<<endl;
    cout<<"The minimum number : "<<mini<<endl;
    cout<<"The number of prime numbers : "<<prime<<endl;
    cout<<"The number of palindrome numbers : "<<palindrome<<endl;
    cout<<"The number that has the maximum number of divisors : "<<getMaxDivisorsNumber(arr)<<endl;

    return 0;
}