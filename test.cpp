#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
#undef NULL 
#define NULL 0


int main2(int a ){

int fact=1;
for (int i = 1; i <=a; i++)
{

fact=fact*i;

}
return fact;

}
int main()
{

    // jadval zarb

    // for ( int i = 1; i<=10 ; i++ )
    //{
    // for (int j = 1; j<=10 ; j++ )
    // cout << i*j << "\t";
    // cout << endl;
    // }

    // find max number

    // int x,y,z;
    // long int max=0;
    // cout<< "enter 3 number"<<"\n";
    // cin>> x>>y>>z;

    // if (x>y&&x>z)
    //{
    //    max=x;
    // }else if(y>z){
    //     max=y;
    // }else{
    //     max=z;
    // }

    // cout<< "max number="<<max;

    // int arr[10];
    // for (int i = 1; i <=10;  i++)
    //{
    //     cout<< "enter your number=";
    //    cin>>arr[i];
    // }

    // for (int i = 1; i <11;  i++)
    //{
    //    if (arr[i]%2!=0)
    //    {
    //  cout<<"\n" <<" your number obb="<< arr[i];

    //  }

    //}

    // tavan

    // int x,y,resulet=1;

    // cout<<"enter your number";
    // cin>>x>>y;

    // for (int i = 0; i < y; i++)
    //{
    //     resulet=  resulet*x;

    //}

    // cout<<resulet;

    // sum and avg

    // int num,length,sum;
    // float avg;
    //  cout<<"enter your length for";
    // cin>>length;

    // for (int i = 0; i < length; i++)
    //{
    //     cin>>num;
    // sum+=num;

    //}
    // avg=sum/length;
    // cout<<" sum is number ="<< sum<<"\n"<<"avg number ="<<avg;

    // factoriel

    // int a,b,fact=1;

    // cout<<"enter your  factoril";
    // cin>>b;

    // for (int i = 1; i <= b; i++)
    //{
    // fact=fact*i;

    //}
    // cout<<" your  factoril"<<fact;

    // sum number obb and  odd

    // int zog,fard=0,x;

    // for (int i = 1; i <=10; i++)
    //{
    //     cout<<"enter your number"<<i <<"\n";
    //     cin>>x;
    // if (x%2==0)
    //{
    //    zog+=x;
    // }else{
    //     fard+=x;
    // }

    //}

    // cout<<"sum is zog"<<zog << "\t"<< "sum is fard"<<fard;

    // find length number

    // int number, length=0;
    // cout<<"enter your number"<<"\n";
    //   cin>>number;

    //  while (number!=0)
    //  {
    //   number=number/10;
    //   length++;
    //  }
    //  cout<<length;

    // sum length number and revers

    // int n1,sumlength,b,k;
    //  cout<<"enter your number ";
    // cin>>n1;

    // b=n1%10;
    // k=n1/10;

    // sumlength=b+k;

    // cout<<" your length number "<<sumlength<<"\n"<<" your revers number " <<b<<k;

    // max arr

    //     int arr[10],max=0;
    //     for (int i = 1; i <=10;  i++)
    //    {
    //         cout<< "enter your number=";
    //        cin>>arr[i];

    //        if (arr[i]>max)
    //        {
    // max=arr[i];        }

    //     }

    //    cout<<"max arr="<<max;

    // int sum=0;
    // int a[4][3],x;
    // cin>>x;
    // for( int i=0;i<4;i++)

    // for(int j=0;j<3;j++){

    // cin>>a[i][j];

    // sum+=a[i][j];
    // }

    // for( int i=0;i<4;i++)

    // for(int j=0;j<3;j++){

    // if (a[i][j]==x)
    //{
    // cout<<"it's a found at index arr =>>"<<a[x][j];
    // break;

    //}

    //}

    // cout<<sum;

    // int arr [7][3];
    // int sum [7][3];
    // for (int i = 1; i <=7; i++)
    //{
    //       cout<<"Enter number rain in the morning and evenig and night "<<i<<"\n";
    // for (int j = 1; j <=3; j++)
    //{
    //   cout<<"enter n"<<j<<"\n";
    //     cin>>arr[i][j];
    // }
    // }

    // for (int i = 1; i <=7; i++)
    //{
    //     cout<<endl <<"day="<<i<<"\n";
    // for (int j = 1; j <=3; j++)
    //{

    //    cout<<arr[i][j];
    //    sum[i][j]+=arr[i][j];
    //}

    //}

    // for (int i = 1; i <= 7; i++)
    //{
    //     cout<<endl;
    // for (int j = 1; j <= 3; j++)
    //{

    // cout<<sum[i][j];

    //}}

    //int a[4][3];
    //for (int i = 0; i < 4; i++)
    //    for (int j = 0; j < 3; j++)
    //        cin >> a[i][j];
    //for (int i = 0; i < 4; i++)
    //{
    //    cout << endl;
    //    for (int j = 0; j < 3; j++)
    //        cout << a[i][j];
    //}





//char users[10];
//int length=0,lowrcase=0,uppercas=0;
//cin>>users;

//for (int i = 0; i < users[i]!=NULL; i++)
//{
//if (users[i]=='a')
//{


//}


//if (users[i]>='a'&& users[i]<='z')
//{
//   lowrcase++;
//}

//if (users[i]>='A'&& users[i]<='Z')
//{
//   uppercas++;
//}


//if (users[i]>='A'|| users[i]<='Z')
//{
//   users[i]=users[i]-32;
//}

//if (users[i]>='a'|| users[i]<='z')
//{
//   users[i]=users[i]+32;
//}


//}

//cout<<length <<"\n"<<lowrcase<<"\n"<<uppercas ;


//cout<<users;


cout<< main2(3);
int arr [3][3];
for (int i = 0; i <= 3; i++)
{
for (int  j = 0; j < 3; j++)
{
cin>>arr[i][j];

}


}


for (int i = 0; i <= 3; i++)
{
    cout<<endl;
for (int  j = 0; j < 3; j++)
{
cout<<arr[i][j];

}


}



    _getch();
    return 0;
}