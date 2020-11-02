#include <stdio.h>

void QuickSort(int arr[], int left, int right) {
  int L = left, R = right;
  int temp;
  int pivot = arr[(left + right) / 2]; //�Ǻ� ��ġ(�߾�)�� ���� ����.

  //�Ʒ��� while���� ���Ͽ� pivot �������� ��, �� ũ�� ���� �� ����. = Partition
  while (L <= R) {

  //pivot�� �߰� ���̰�, �� ��� arr[L], arr[R]�� pivot�� ���ϴ� �߰� ������ �Ѿ�� ����� �� �� ����.
    while (arr[L] < pivot) //left���� �����ϸ� pivot �̻��� ���� ã��.
      L++;
    while (arr[R] > pivot) //right���� �����ϸ� pivot ���� ���� ã��.
      R--;
    //L, R ��� �ִ� pivot ��ġ���� �̵�.

    if (L <= R) { //���� L�� R���ϸ�. (���� : L>R �κ��� �̹� ������ �� ������).
      if (L != R) { //���� ���� ��츸.
        temp = arr[L];
        arr[L] = arr[R];
        arr[R] = temp;
      } //L�� R�� ���ٸ� ��ȯ(SWAP)�� �ʿ� ���� �� ĭ�� ���ุ ���ָ� ��.
      L++; R--; //�׸��� L,R �� ĭ �� ����.
    }
  }

  //���� Ȯ���Ͽ� ����Լ���.
  if (left < R)
    QuickSort(arr, left, R);
  if (L < right)
    QuickSort(arr, L, right);
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    QuickSort(arr, 0, n - 1);
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}