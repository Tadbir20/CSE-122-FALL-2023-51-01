#include <iostream>
int main()
{
    int i,t,sum=0;
    char arr[100];
    char x[2]="X";
    char pls[2]="+";
    char mns[2]="-";
    scanf("%d",&t);
   for(i=0; i<t; i++)
    {
scanf("%s",arr);
        if((arr[0]==x[0] && arr[1]==pls[0] && arr[2]==pls[0]) || (arr[2]==x[0] && arr[1]==pls[0] && arr[0]==pls[0]))
            sum++;
        else if((arr[0]==mns[0] && arr[1]==mns[0] && arr[2]==x[0]) || (arr[2]==mns[0] && arr[1]==mns[0] && arr[0]==x[0]))
            sum--;
    }
    printf("%d",sum);
    return 0;
}
