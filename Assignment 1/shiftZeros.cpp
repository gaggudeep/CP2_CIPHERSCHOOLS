#include<bits/stdc++.h>

using namespace std;

void moveZeroes(int *nums, int n)
{

        int zeroIdx = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i] != 0 && i != zeroIdx)
            {
                nums[zeroIdx++] = nums[i];
                nums[i] = 0;
            }
        }
}

int main()
{
    int a[] = {0, 1, 6, 0, 0, 3, 12};
    moveZeroes(a, 7);
    for(int i : a)
        cout<<i<<" ";

    return 0;
}
