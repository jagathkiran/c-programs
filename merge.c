int main () {
    int nums1[],  nums1Size,  m,  nums2[],  nums2Size,  n;
    int i=0,j=0,k=0;
    while (i<nums1Size && j<nums2Size) {
        if (nums1[i] < nums2[j]) {
            res[k] = nums1[i];
            i++;
        }
        else if (nums1[i] > nums2[j]) {
            res[k] = nums2[j];
            j++;
        }
        else {
            res[k] = nums1[i];
            i++;
            j++;
        }
        k++;
    }
    while (i<nums1Size) {
        res[k]=nums1[i];
        i++;
        k++;
    }
    while (j<nums2Size) {
        res[k]=nums2[j];
        j++;
        k++;
    }
}