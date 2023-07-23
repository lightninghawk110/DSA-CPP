class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void swap(int *a,int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    void quickSort(int arr[], int low, int high)
    {
        // code here
        int pi;
        if(low<high)
        {
            pi=partition(arr,low,high);
            quickSort(arr,low,pi-1);
            quickSort(arr,pi+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot=arr[low];
       int i=low;//i always look for greater elements than pivot
       int j=high+1;//j will always look for smaller elements than pivot
       do{
           
        do{//ignores if i spots an element less than or equal to pivot 
               i++;
            }while(arr[i]<=pivot);
            
        do{//ignores if j spots an element greater than pivot
               j--;
            }while(arr[j]>pivot);
            
        if(i<j)//if both the loop cases failed this condition satisfies
            swap(&arr[i],&arr[j]);
            
        }while(i<j);
        swap(&arr[j],&arr[low]);
        return j;//returns the pivot index
    }
};