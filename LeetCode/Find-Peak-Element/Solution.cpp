int start = 0;
int end = n-1;

while(start <= end) {
	int mid = start + (end - start)/2;
	if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) return mid;   // if mid == peak ( case 2 )
	else if(nums[mid] < nums[mid-1]) end = mid - 1; // downward slope and search space left side ( case 1)
	else if(nums[mid] < nums[mid+1]) start = mid + 1; // upward slope and search space right side ( case 3 )
}