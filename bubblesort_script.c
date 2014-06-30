/*-------------------------------------------------------
Name: Daniel Roberts
NAU id: dr369
Date: September 20, 2011
Name of Program: dr369_110920_HW1_4.c
Assignment and Problem number: HW1, #4

I hereby declare that I have not helped, or received or solicited help from
any unauthorized material or individual for this homework.
Initials: dr
--------------------------------------------------------*/

#include <stdio.h>
#define SIZE 10

void bubbleSort(int * const,const int);

int main(void)
{
    /*intialize the array*/

    int a[SIZE] = {1,6,2,4,8,3,5,7,0,9};

    int count;

    printf("data in original order : \n");

    for (count = 0; count < 10; count++){
        printf("%d\t",a[count]);
    }

    bubbleSort(a,SIZE);

    printf("\n\ndata in ascending order : \n");

    for (count = 0; count < 10; count++){
        printf("%d\t",a[count]);
    }

    printf("\n");

    system("PAUSE");

    return 0;
}


void bubbleSort(int * const array, const int size){

     void swap (int*,int*);

     int pass;
     int count2;
     int test=0;

     for(pass = 0; pass < size - 1; pass++){
              for (count2 = 0; count2<(size - 1)-pass; count2++){
                  if (array[count2] > array[count2+1]){
                     swap(&array[count2], &array[count2+1]);
                     test=1;
                  }
              }
    if (test==0)
                break;
            }
}

void swap(int *element1, int *element2){
     int temp = *element1;
     *element1 = *element2;
     *element2 = temp;
}



