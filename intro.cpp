#include <iostream>
#include <string>
using namespace std;
int main()
{
    // cout<<"hug";
    // int x = 9;
    // if(x==7) cout<<"yes"<<endl;
    // x=x+1;
    // else cout<<x<<" no"<<endl;
    // int x =9;
    // //cin>>x;
    // cout<<((x%2)?"odd":"even");
    // int x, sum =0;
    // cin>>x;
    // for (int=i;i<=x;++i){
    //     sum+=i;
    // }
    // cout<<"sum of "

    // int x =5;
    // //cin>>x;
    // for (int i = 1;i<=x;++i){
    //     for (int j = 1 ;j<=i;++j){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    /*int x =5;
    //cin>>x;
    for (int i = 1;i<=x;++i){
        for (int j = 1 ;j<=x-i;++j){
            cout<<" "<<" ";
        }
        for(int j=1;j<=i;++j){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }*/

    // for this pattern for x rows
    //  *
    //  * *
    //  * * *
    //  * * * *
    //  * * *
    //  * *
    //  *
    /*int x;
    cin>>x;
    for (int i = 1;i<=((x+1)/2);++i){
        for (int j = 1 ;j<=i;++j){
            cout<<"*"<<" ";
        }
        cout<<endl;

    }
    for(int i=1;i<=(((x+1)/2)-1);++i){

        for (int j=1;j<=(((x+1)/2)-i);++j){
            cout<<"*"<<" ";

        }
        cout<<endl;

    }*/

    // for this pattern for x rows
    //  .* * * *
    //  .*     *
    //  .*     *
    //  .* * * *
    /*int x;
     cin>>x;
     for (int i=1;i<=x;++i){
         //cout<<".";
         if(i==1 || i==x){

             for(int j=1;j<=x;++j){
                 cout<<"*"<<" ";
             }
             cout<<endl;
         }
         else{
             for (int j=1;j<=x;++j){
                 if(j==1||j==x){
                     cout<<"*"<<" ";
                 }
                 else{
                     cout<<"  ";
                 }

             }
             cout<<endl;
         }
     }*/

    // for this pattern for x rows
    //        *
    //      * *
    //    * * *
    //  * * * *
    //    * * *
    //      * *
    //        *
    /*int x;
      cin>>x;
      for (int i = 1;i<=((x+1)/2);++i){
          for (int j = 1 ;j<=((x+1)/2);++j){
              if (i+j>((x+1)/2)) cout<<"*"<<" ";
              else cout<<"  ";
          }
          cout<<endl;
      }
      for(int i=1;i<=(((x+1)/2));++i){
          for (int j=1;j<=(((x+1)/2));++j){
              if(j<=i) cout<<"  ";
              else cout<<"*"<<" ";
          }
          cout<<endl;
      } */

    // for this pattern for x rows
    //****
    //****
    //****
    //****
    //     int x;
    //     cin >> x;
    //     for (int i = 0; i < x; i++)
    //     {
    //         cout << ".";
    //         for (int j = 0; j < x; j++)
    //         {
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }

    // int x=10;
    // int *p=&x;
    // cout<<p;
    // int a[3]={3,0,5};
    // cout<<a;//will print the adress of first element

    // addition of two matrix
    /*int sum =0;
    int b[3][5]={(2,4,6),(5,4,6),(3,6,8)};
    int a[3][3]={(2,3,4),(3,4,5),(3,5,6)};
    for(int i=0;i<3;i++){
        for (int j =0;j<3;j++){
            sum+=a[i][j]+b[i][j];
        }
    }
    cout<<sum;*/

    // addition of string
    /*string a="string",b="gryff";
     string c=a+" "+b;
     string d=a.append(b);
     cout<<c<<" "<<d;*/

    // to know length of the string we have to use length function
    /*string b="fugriiw";
    cout<<"length is "<<b.length()<<endl;
    cout<<"length is "<<b.size();//u can also use size function,,size is alias of length */

    // u can excess letter fron a string by using array method as in c
 
    // int a[]={5,3,5};
    // cout<<*a;
    //int b[2][2] = {{3, 4}, {4, 5}};
    //cout << *(*(b + 1) + 1);
    int x =123,rem=0,rev=0;
    for(int i=x;i!=0;rem=i%10,rev=rev*10+rem,i=i/10);
    cout<<rev;
    // int arr[100400];
    // for (int i=1;i<100400;++i){
    //     arr[i]=0;
    // }
    // for(int i =2;i*i<100400;++i){
    //     if(arr[i]==0){
    //     for (int j = i*i;j<100400;j+=i){
    //         arr[j]=1;
    //     }
    // }
    // }
    // cout<<arr[10079]<<endl;


}