/**
 * Merges two sorted arrays into nums1 in non-decreasing order
 *
 * nums1 has enough space to hold all elements from nums2
 * The merge is done from the end to avoid overwritten elements
 */

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    if (n == 0)
    {
        return;
    }

    int len1 = nums1Size;
    int end_idx = len1 - 1;
    while (n > 0 && m > 0)
    {
        if (nums2[n - 1] >= nums1[m - 1])
        {
            nums1[end_idx] = nums2[n - 1];
            n--;
        }
        else
        {
            nums1[end_idx] = nums1[m - 1];
            m--;
        }
        end_idx--;
    }
    while (n > 0)
    {
        nums1[end_idx] = nums2[n - 1];
        n--;
        end_idx--;
    }
}
