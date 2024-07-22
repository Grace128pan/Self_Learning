/*
The following program uses length to copy one array to another while preventing an array overrun and its attendant run-time exception.
 */

package JPrograms;

class ArrayCopy {
    public static void main(String[] args) {
        int i;
        int[] Nums1 = new int[10];
        int[] Nums2 = new int[10];

        for(i=0; i<Nums1.length; i++)
            Nums1[i] = i;
        
        //copy nums1 to nums2
        if(Nums2.length >= Nums1.length)  //use length to compare array sizes
            for(i=0;i<Nums1.length; i++)
                Nums2[i] = Nums1[i];
        
        for(i=0; i<Nums2.length; i++)
            System.out.print(Nums2[i] + " ");
    }
}