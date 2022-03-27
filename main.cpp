#include <iostream>
#include "stack.cpp"
using namespace std;



bool isBalanced(string brakets){

  Stack<char> par;

   for (int i = 0; i <brakets.size(); i++)
   {
       if (!par.isFull())
       {
           if (brakets[i]=='(')
           {
                par.Push(brakets[i]);
           }
           else{
               par.Pop();
           }

       }

   }

   if (par.isEmpty())
   {
       return true;
   }
   else
   {
       return false;
   }





}

int main()
{
//     Stack<int> s;
//     for (int i = 0; i < 4; i++)
//     {
//         int temp;

//         cin>>temp;

//         s.Push(temp);


//     }


//     cout<<endl;
//    Stack<int> aux;

//     while (!s.isEmpty())
//     {
//       cout<<s.Top()<<endl;
//         aux.Push(s.Top());
//         s.Pop();
//     }
//     cout<<endl;
//     while (!aux.isEmpty())
//     {

//         s.Push(aux.Top());
//          cout<<aux.Top()<<endl;
//         aux.Pop();
//     }


    string brakets = "(())()(()())()";
    //   string brakets;
      // getline(cin,brakets);


     if (isBalanced(brakets))
     {
         cout<<"Balanced"<<endl;
     }
     else{
         cout<<"Not Balanced"<<endl;
    }








    return 0;
}
