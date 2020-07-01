// 'Hello World!' program

#include <iostream>
#include <string>
using namespace std;

//declare global variable
const bool DEBUG = true;
int num = 0;

string displayMessage(string message)
{

   if (DEBUG)
   {
      cout << "In displayMessage function, before editing message is " << message << endl;
   }

   message = message + "!!!";

   if (DEBUG)
   {
      cout << "In displayMessage function, after editing message is " << message << endl;
   }

   if (DEBUG)
   {
      cout << num << endl;
   }

   return message;
}

int main()
{
   //declare local variable
   string message = "Hello, World!";
   cout << message << endl;

   if (DEBUG)
   {
      cout << "In main function, before function call, message is " << message << endl;
   }
   //declare local variable

   string newMessage = displayMessage(message);
   if(DEBUG)
   {
      cout << "In main function, after method call, message is " << message << endl;
   }

   cout << newMessage << endl;

   num = 5;
   cout << num << endl;

   return 0;
}