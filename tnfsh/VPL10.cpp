#include <iostream>
//#include <string> 
//#include <cstring> //strlen
//#include <sstream>
//#include <iomanip> //setprecision
//#include <vector>
//#include <map>
//#include <algorithm> 
//#include <cmath> 
//#include <random>
//#include <ctime>
//#include <cstdio>
//#include <cstdlib>
//#include <cctype> isdigit,isupper,islower

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *array, int front, int end)
{
    int pivot = array[end];
    int i = front - 1;
    for (int j = front; j < end; j++)
    {
	if (array[j] < pivot) 	
	{
	    i++;
	    swap(&array[i], &array[j]);
	}
    }
    i++;
    swap(&array[i], &array[end]);
    return i;
}
void quicksort(int *array, int front, int end)
{
    if (front < end)
    {
	int pivot = partition(array, front, end);
	quicksort(array, front, pivot - 1);
	quicksort(array, pivot + 1, end);
    }
}


int main()
{
    //std::ios::sync_with_stdio(false); //加速cin cout用
    //std::cin.tie(0); //加速cin cout用
    //fixed << setprecision(n) << variable 取小數點用
    //static_cast<new-type>(expression) 強制型別轉換
    //int isdigit(int x) return 0 or int 判斷是否為0 - 9
    //max_element(begin, end) return iterator
    
    //主要程序碼
    int n{}; //金榜題名時
    cin >> n;
    int temp[n];
    for (int i = 0; i < n; i++)
	cin >> temp[i];
    quicksort(temp, 0, n - 1);
    for (int i = n - 1; i >= 0; i--)
	cout << temp[i] << endl;
    //程式碼結尾

    return 0;
}
