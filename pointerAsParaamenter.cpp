#include<iostream>
#include<cmath>

using namespace std;

const double array_size = 10;

int mean(int* arr)
{
    int mode = arr[0];
    int max_count = 1;
    for(int i = 0; i < array_size; ++i)
    {
        int counter = 0;
        for(int j = 0; j < array_size; ++j)
        {
            if(arr[i] == arr[j])
            {
                ++counter;
            }
        }

        if(counter > max_count)
        {
            max_count = counter;
            mode = arr[i];
        }
    }

    return mode;
}

double average(int* arr)
{
    int sum  = 0;
    for(int i = 0; i < 10; ++i)
    {
        // sum += arr[i];
        sum += *(arr + i);
    }

    return sum / array_size;
}

void sort_array(int* arr)
{
    for(int i = 0; i < array_size; ++i)
    {
        for(int j = 0; j < array_size; ++j)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

double get_mean(int* a)
{
    return ((double)a[(int)ceil((array_size - 1) / 2)] +
             a[(int)floor((array_size -1) / 2)]) / 2;
}

int main(){
    int a[] = {1, 3, 4, 1, 5, 1, 7, 8, 9, 2};
    cout << "average: " << average(a) << endl;
    cout << "mode: " << mean(a) << endl;
    sort_array(a);
    for(int i = 0; i < array_size; ++i)
    {
        cout << a[i] << " ";
    }

    cout << endl << get_mean(a);

    return 0;
}
