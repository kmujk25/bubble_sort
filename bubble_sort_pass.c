#include <stdio.h>
#define SIZE 5

// 배열 전체를 한 줄로 출력하는 함수
void print_array(int list[], int n)
{
    for (int k = 0; k < n; k++)
        printf("%d ", list[k]);
    printf("\n");
}

// list 배열과 그 배열의 크기 n을 받아서 정렬을 수행
void bubble_sort(int list[], int n)
{
    int i, j, temp;
    int pass = 1;                     // 회전 번호

    for (i = n - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (list[j] > list[j + 1]) {  // 앞뒤의 값을 비교한 후 교환
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
        printf("%d회전 결과 : ", pass++);  // 한 회전이 끝날 때마다 출력
        print_array(list, n);
    }
}

// 버블 정렬 기법
int main(void)
{
    int arr[SIZE] = { 24, 5, 7, 3, 20 };

    printf("정렬 전 데이터   : ");
    print_array(arr, SIZE);

    bubble_sort(arr, SIZE);           // 버블 정렬 함수 호출

    printf("버블 정렬 후 데이터 : ");
    print_array(arr, SIZE);
    return 0;
}
