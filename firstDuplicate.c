// Definition for arrays:
// typedef struct arr_##name {
//   int size;
//   type *arr;
// } arr_##name;
//
// arr_##name alloc_arr_##name(int len) {
//   arr_##name a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
//   return a;
// }
//
//
int firstDuplicate(arr_integer a) {
    for (int i = 0; i < a.size; i++)
    {
        if (a.arr[abs(a.arr[i]) - 1] < 0)
        {
            return abs(a.arr[i]);
        }

        a.arr[abs(a.arr[i]) - 1] *= -1;
    }
    return -1;
}
