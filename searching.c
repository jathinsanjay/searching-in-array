#include <stdio.h>
int
binarysearch (int arr[], int size, int element)
{
  int high, low, mid;
  low = 0;
  high = size - 1;

  while (low <= high)
    {
      mid = (high + low) / 2;
      if (arr[mid] == element)
	{
	  return mid;
	}
      else if (element > mid)
	{
	  low = mid + 1;
	}
      else
	{
	  high = mid - 1;
	}

    }
  return -1;
}

int
linearsearch (int arr[], int size, int element)
{
  for (int i = 0; i < size; i++)
    {
      if (arr[i] == element)
	return i;
    }
}

int
main ()
{
  int arr[100], size, element;
  printf ("enter size of array ");
  scanf ("%d", &size);
  int searchtype;
  printf ("enter 1 if array is sorted ,if not enter 2 :");
  scanf ("%d", &searchtype);
  switch (searchtype)
    {
    case 1:
      {
	for (int i = 0; i < size; i++)
	  {
	    printf ("Enter %d element", i);
	    scanf ("%d", &arr[i]);

	  }
	printf ("enter element to be searched ");
	scanf ("%d", &element);
	int index = binarysearch (arr, size, element);


	printf ("Index of the element  is %d", index);
      }
    case 2:
      for (int i = 0; i < size; i++)
	{
	  printf ("Enter %d element ", i);
	  scanf ("%d", &arr[i]);

	}
      printf ("enter element to be searched ");
      scanf ("%d", &element);
      int index = linearsearch (arr, size, element);


      printf ("Index of the element  is %d", index);
    }
  return 0;
}
