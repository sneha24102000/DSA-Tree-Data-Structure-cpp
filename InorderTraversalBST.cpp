-program that returns 1 if array represents Inorder traversal of a BST, else returns 0.


int isRepresentingBST(int arr[], int N)
    {
        // code here
        if(N==0||N==1)
           return 1;   //Array has one or no element
        for(int i=1; i<N ; i++)
           if(arr[i-1]>arr[i])
             return 0;   //unsorted pair found
             
        return 1; //No unsorted pair found     
    }