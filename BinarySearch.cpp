int binarySearch(int v[10001],int target)
{
	bool found = 0; //helps in determining if a there's target's value in the array
	int r = 0;
	for (int i = 0;i <= 10000;i++) //count the number of elements
	{
		if ((v[i] == 0) && (v[i] < v[i + 1])) r++;;
		if (v[i] && (v[i] > v[i - 1])) r++;
	}
	int left = 0;
	int right = r;
	while (left <= right) //this loop is changing either left's or right's value based on the target value 
	{					//in order to find target's value in the array
		int mid = (right + left) / 2;
		if (v[mid] == target) {
			return mid-1;
			found = 1;
			break;
		}
		if (v[mid] < target)
			left = mid + 1;
		if (v[mid] > target)
			right = mid - 1;
	}
	if (!found) return -1;
}
int v[10001];
int main()
{
	int n,target;
	cin >> n >> target;
	for (int i = 1;i <= n;i++) // fill in the array
	{
		cin >> v[i];
	}
	cout << binarySearch(v, target);
	
}

