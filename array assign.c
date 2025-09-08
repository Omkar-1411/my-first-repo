#include<stdio.h>
/*
void main()
{
    int n;
    printf("enter the range of array=");
    scanf("%d",&n);

    int arr[n];
    printf("input %d array element:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
       for(int i=0;i<n;i++)
       {
         printf("%d,",arr[i]);
       }



}

 input 10 integers and print them in reverse order:
void main(){
  int n;
    printf("enter the range of array=");
    scanf("%d",&n);

    int arr[n];
    printf("input %d array element:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Revers:");



    for(int i=n-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
}
// Find the maximum value in an array of n elements.



void main()
{
    int arr[10]={20,4,2,5,7,6,8,9,8,7};

    for(int i=0;i<10;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("\n");
    int max=0;
    for(int i=0;i<10;i++)
    {
      if(max < arr[i])
      {
         max=arr[i];
      }

    }
    printf("max number=%d",max);

}


void main()
{
    int arr[10]={20,4,2,5,7,6,8,9,8,7};

    for(int i=0;i<10;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("\n");
    int max=0;
    for(int i=0;i<10;i++)
    {
      if(max < arr[i])
      {
         max=arr[i];
      }

    }
    printf("max number=%d",max);

}






void main()
{
    int avg;
    int n;


    printf("enter the range=");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
     for(int i=0;i<n;i++)
     {
         sum=sum+a[i];

     }
     printf("sum=%d\n",sum);
     avg=sum/n;
     printf("avg=%d",avg);
}

void main()
{
     int evencount=0;
     int oddcount=0;
    int n;
    printf("enter the range of array:");
    scanf("%d",&n);

    int a[n];
    printf("enter %d elemnt:",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    //+++++++++++ Even ++++++++++++++++
    printf("Even number=");
    for(int i=0; i<n; i++)
    {

        if(a[i]%2==0)
        {
            printf("%d,",a[i]);
        }


    }
    printf("\n");
    printf("odd number=");
    for(int i=0; i<n; i++)
    {

        if(a[i]%2!=0)
        {
            printf("%d,",a[i]);
        }


    }
    //--------  count ----------
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {

            evencount++;
        }

        else
        {

            oddcount++;
        }




    }
    printf("\n");


    printf("total count of even number=%d\n",evencount);
    printf("total count of odd number=%d\n",oddcount);



}

void main()
{
    int a[5]={1,2,3,2,5};
    int count=0;
    int num;
     printf("Array:");
    for(int i=0;i<5;i++)
    {
        printf("%d,",a[i]);
    }
printf("\n");
    printf("enter the number to find count:");
    scanf("%d",&num);

    for(int i=0;i<5;i++)
    {
        if(num==a[i])
        {
            count++;
        }
    }
    printf("Number %d occur %d times in the array:",num,count);
}


void main()
{

    int arr[5]={1,2,3,4,5};
    int copy[5];
    printf("Original array=");
    for(int i=0;i<5;i++)
    {
        printf("%d,",arr[i]);
    }

    for(int i=0;i<5;i++)
    {
        copy[i]=arr[i];
    }
    printf("\n");
    printf("Copied array=");
    for(int i=0;i<5;i++)
    {
        printf("%d,",copy[i]);
    }
}


//+++++++++  TWO DIMETIONAL ARRAY  ++++++++++++++++++++++++++++++

int display(int s1,int s2,int array[][s2]){
 for(int i=0;i<s1;i++)
    {
        printf("%d Rows Student {",i+1);
        for(int j=0;j<s2;j++)
        {
            printf("%d, ",array[i][j]);
        }
        printf("}\n");
    }
}

void main()
{
    int a[3] [4]={{12,13,14,15},{20,22,24,26},{40,60,80,20}};
    a[0][1]=23;
    display(3,4,a);


    int arr[3][2];

    for(int i=0;i<3;i++){
    printf("Roll No %d enter u r @ subject Marks ",i+1);
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
     display(3,2,arr);
}

int display(int a[], int b[],int m[],int s1,int s2)
{
      printf("First array:\n");
    for(int i=0; i<s1; i++)
    {
        printf("%d,",a[i]);
    }
      printf("\n");

    printf("Second array:\n");
    for(int i = 0; i < s2; i++)
    {
        printf("%d ", b[i]);

    }      printf("\n");


        for(int i=0; i<s1; i++)
        {
            m[i]=a[i];
        }

        for(int i=0; i<s2; i++)
        {

            m[s1+i]=b[i];
        }


        printf("Merged array:\n");
        for(int i = 0; i < s1 + s2; i++)
        {
            printf("%d ", m[i]);
        }

    }

    void main()
    {
        int a1 [2]= {12,13};



        int a2[3]= {14,15,16};

        int m[5];


        display(a1,a2,m,2,3);

    }


void main()
{

    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum=0;
    int sum1=0;
    printf("Array:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ,",a[i][j]);
        }
    }
    printf("\n");
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];

            }
             if(i+j==2)
            {
                sum1=sum1+a[i][j];
            }
        }

    }
     printf("sum=%d\n",sum);
      printf("sum1=%d",sum1);



}
/*
1 0 0
4 5 0
7 8 9


void main()
{
 int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    printf("Array:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ,",a[i][j]);
        }
    }
    printf("\n");

     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           if(i<j)
           {
               a[i][j]=0;
             //  printf("%d,",a[i][j]);
           }
        }
        printf("\n");
}
   //dis
      for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


}


void main()
{

    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum=0;

    printf("Array:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ,",a[i][j]);
        }
    }
    printf("\n");
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j==0)
            {
                sum=sum+a[i][j];

            }

        }

    }
     printf("sum=%d\n",sum);
}
*/
void main()
{
 int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    printf("Array:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ,",a[i][j]);
        }
    }
    printf("\n");

     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           if(i>j)
           {
               a[i][j]=0;
             //  printf("%d,",a[i][j]);
           }
        }
        printf("\n");
}
   //dis
      for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


}

