// Ashraful Alim 
#include <stdio.h>
#include <time.h>

int main() {
    int first, last, mid, c, search;
    int num[10] = {1,3,5,7,9,11,13,15,17,19};
    
    
    clock_t linearStart, linearFinish;
    clock_t binaryStart, binaryFinish;
    
    printf("Enter number to search: ");
        scanf("%d", &search);
        
    printf("\n\n----Applying Linear Search-----\n");
    
    linearStart = clock();
    
    for(c=0; c<10; c++){
        if (num[c] == search) {
            printf("\nFound %d at index %d", search, num[c]);
            break;
        }
        if(c==10) printf("%d Not found", search);
            
    }
    
    linearFinish = clock();
    double x = ((double) linearFinish - linearStart)/CLOCKS_PER_SEC;
    
    printf("\nExecution time: %lf\n", x);
    
    printf("\n\n----Applying Binary Search-----\n");

    first = 0;
    last = 9;
    mid = (first+last)/2;

binaryStart = clock();

    while (first <= last){
      if(num[mid] == search){
        printf("%d Found at index %d", search, num[mid]);
        break;
      }
      else if (num[mid] < search){
        first = mid + 1;
      }
      else last = mid - 1;

    mid = (first+last)/2;

      if (first > last){
        printf("%d Not Found", search);
      }
    }

binaryFinish = clock();

double y = ((double) binaryFinish - binaryStart)/CLOCKS_PER_SEC;
printf("\nExecution time: %lf\n", y);
    
if (x>y) printf("\n\n*Binary Search is efficient*\n\n");
else printf("\n\n*Linear Search is efficient*");

    return 0;
}
