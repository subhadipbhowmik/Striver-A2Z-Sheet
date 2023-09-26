
public class SelectionSorting {

    public static void main(String[] args) {
        int arr[]={13,45,29,90,238};
        int n = arr.length;
        System.out.println("Before sorting ");
        for(int i=0; i<n; i++){
            System.out.print(arr[i] + " ");
        }

        System.out.println();
        selection_sort(arr, n);
    }

    private static void selection_sort(int[] arr, int n) {
        for(int i= 0;i<n-1;i++){
            int mini=1;
            for(int j = i+1;j<n;j++){
                if(arr[j]>arr[mini]){
                    mini = j;
                }
            }

            int temp = arr[mini];
            arr[mini] = arr[i];
            arr[i]=temp;
        }

        System.out.println("After selection sort:");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
