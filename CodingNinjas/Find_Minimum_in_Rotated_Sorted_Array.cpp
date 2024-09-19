/*
    Link : https://www.naukri.com/code360/problems/rotated-array_1093219?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=PROBLEM
*/

int findMin(vector<int>& arr)
{
	// Write your code here.
	int left=0, right=arr.size()-1; 
	int mini=INT_MAX;

	while(left<=right){
		int mid = (left+right)/2;
		if(arr[left]<=arr[mid]){
			mini = min(mini, arr[left]);
			left = mid+1;
		}
		else{
			mini = min(mini, arr[mid]);
			right = mid-1;
		}
	}
	return mini;
}