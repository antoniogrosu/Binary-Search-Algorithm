int binarySearch(int v[10001],int target)
{
	bool found = 0;
	int r = 0;
	for (int i = 0;i <= 10000;i++)
	{
		if ((v[i] == 0) && (v[i] < v[i + 1])) r++;;
		if (v[i] && (v[i] > v[i - 1])) r++;
	}
	int left = 0;
	int right = r;
	while (left <= right)
	{
		int mid = (right + left) / 2;
		if (v[mid] == target) {
			return mid;
			found = 1;
			break;
		}
		if (v[mid] < target)
			left = mid + 1;
		if (v[mid] > target)
			right = mid - 1;
	}
	if (found == 0) return -1;
}

