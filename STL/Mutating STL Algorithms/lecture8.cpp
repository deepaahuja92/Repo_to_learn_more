//make_heap function in c++
//make_heap(v.begin(),v.end())
//By default it makes min_heap
// void merge(int a[],int b[],int m,int n)
// {
//     for(int i=0;i<m;i++){
//         if(a[0]>b[n-1]){
//             pop_heap(b,b+n,greater<int>());
//             swap(a[i],b[n-1]);
//             push_heap(b,b+n,greater<int>());
//         }
//     }
//     sort_heap(b,b+n);
// }