#include<iostream.h>
#include<conio.h>

void main()
{
  clrscr();
  int a[100],loc,mid,beg,end,n,flag=0,item;
  cout<<"How many element insert :";
  cin>>n;
  cout<<"Enter the element of the array :"<<endl;
  for(int i=1;i<=n;i++)
  {
     cin>>a[i];
  }
  cout<<"Enter the element to be searching "<<endl;
  cin>>item;

  loc = 0;
  beg = 0;
  end=n-1;
  while((beg<=end) && (item!=a[mid]))
  {
     mid = ((beg+end)/2);
      if(item==a[mid])
      {
	 cout<<"Search is successful  "<<item<<endl;
	 loc = mid;
	 cout<<"Position of the element is : "<<loc+1;
	 flag = flag+1;
      }

     if(item<a[mid])
       end=mid+1;
     else
     beg = mid+1;
  }
  if(flag==0)
    {
      cout<<"Search is ot sussecfull"<<endl;
    }
  getch();
  }