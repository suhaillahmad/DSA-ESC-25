/* Author : Suhail Ahmad 
   Date   : 13 / 02 / 2022 */


/* Pointer is used to store the address of a datatype.
example = int num = 5;
          int *p = &num;(p is a pointer to int).
Note: The datatype of the pointer should be same as the datatype of num. 
For printing the pointer (cout<<*p;)(output = 5) */



#include<iostream>
using namespace std;

int main()
{
    int num = 5;
    int *ptr = &num;                                // &(not and) is address of operator.
    cout<<*ptr<<endl;                               // Output will be 5.
    cout<<ptr<<endl;                                // Output will be address of num. 
    cout<<sizeof(ptr)<<endl;                        // Output will 8(System dependent(64bit)). 
 
    int a = num;
    cout << " a value " << num << endl;            // The value of num will be 5.
    a++;
    cout << " a value after " << num << endl;      // (The value of num will be 5 again because a makes a copy of num incrementing
                                                   // a will not affect the value of num.)
    int *p = &num;
    cout << " before " << num << endl;              // Output will be 5.
    (*p)++;                                         // Increament the value of num.
    cout<< " after " << num <<endl;                 // (Output will be 6. Now here in the case of pointer the value of num increases
                                                    // because pointer does not create a copy it points to the original value only.)
     //Copying a pointer.

     int *q = p;

     cout << p << " -- " << q << endl;
     cout << *p << " -- " << *q << endl;

    //important concept.
     int i = 3;
     int *t = &i;
     *t = *t + 1;
     cout << *t << endl;
     t = t + 1;             // (The address will increase by four. because a integer takes four bytes(depends on processor).
                            // agli int ki location pe chala jayega.)
     cout << t << endl;
       return 0;
}
/* int *ptr = &num; and int *ptr = 0; are same.
                        ptr = &num;       
(* = value at) and (& = address of)       
array note : arr[i] and i[arr] both print the same value */



int arr[10] = {2,5,4};
cout << "The address of array is " << arr << endl;      // the name of the array stores the address of first block.
cout << "The address of array is " << &arr[0] << endl; // the address of first block.
cout << "The value at 0th posi is" << *arr << endl;   // the value at 0th posi in the array will be printed i.e 2.
cout << "The value of 0th+1 posi is" << *arr + 1 << endl;  // the value at 0th posi + 1 will be printed i.e 3.  (arr[i] = *(arr + i))
cout << "The value at ith posi is" << *(arr+1) << endl;   // the value at 1th posi in the array will be printed i.e 5.



int temp[10];
cout << sizeof(temp) << endl; //The size of temp i.e 10*4 = 40 will be printed.
int *ptr = &temp[0];
cout << sizeof(ptr) << endl;  //The size of address i.e 8 will be printed.
cout << sizeof(*ptr) << endl;  //The size of value at the address i.e 4 will be printed.
cout << sizeof(&ptr) << endl;  //Address store karne ke liye jitni byte chaiye vo store hogi i.e 8 will be printed.
cout << sizeof(*temp)<< endl;  // The size of int will be printed i.e 4.
cout << sizeof(&temp)<< endl; // The size of address i.e 8 will be printed.



int arr[10] = {1,2,3};
cout << &arr[0] << endl; // The address of first block will be printed.
int *p = &arr[0];
cout << &p << endl; // The address of p will be printed i.e &p != &arr[0].


int arr[10];
arr = arr + 1   //This will give error (The value is assigned in symbol table and we cannot change it).
// But if want to print it we can easily do it with the use of pointer.
int *ptr = &arr[0];
ptr = ptr + 1;
cout << ptr << endl; // The value of address at arr[1] will be printed.(the next address will be printed).



// Character ARRAY

int arr[10] = {1,2};
char ch[6] = "abcde"; //Char Array store a null charecter thats why we have to give it +1 size.
cout << arr << endl; //The address of first value will be printed.
cout << ch << endl; //Here comes the diff that if will print abcde(entire string) instead of address as in integer Array.
char *c = &ch[0];
cout << c << endl; //Here comes again a diff 'LOL' it will print the entire string. Not the address as in integer Array.
char temp = 'z';
int *p = &temp;
cout << p << endl; //Jab tak isse null character nh milega tab tak print hota rahega ex:- in this case : z??j will be printed.


//DOUBLE Pointer

int i = 5;
int *ptr = &i;
int **ptr2 = &ptr;
cout << **ptr2  << endl; //   The value 5 will be printed (because the pointer ptr2 is pointing to the value at address of ptr and 
                        //    the value at ptr is point to the value at address at i)


// Questions on pointer

1)  int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout  << first << " " << second << endl;    // 8  9

2)  int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first  << endl;     // 7

3)  int first = 8;
    int *p = &first;
    cout << (*p)++ << " ";    // 8
    cout << first << endl;   // 9  

4)  int *p = 0;
    int first = 110;
    *p = first;
    cout << *p << endl;    // Segmentation fault

5)  int first = 8;
    int second = 11;
    int *third = &second; 
    first = *third;
    *third = *third + 2;
    cout  << first << "  " << second << endl;   // 11  13

6)  float f = 12.5;
    float p = 21.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p << endl;  // 21.5  21.5  21.5
    

7)  int arr[5];
    int *ptr;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;  // 4  8

8)  int arr[] = {11, 21, 13, 14};
    cout << *(arr) << " " << *(arr+1) << endl;   // 11  21

9)  int arr[6] = {11, 12, 31};
    cout << arr << " " << &arr << endl;  // the address of 11    the address of 11

10) int arr[6] = {11, 21, 13};
    cout << (arr + 1) << endl;      // Address of 21

11)  int arr[6] = {11, 21, 31};
    int *p = arr; 
    cout << p[2] << endl;        // 31

12) int arr[] = {11, 12, 13, 14, 15};
    cout << *(arr) << " " << *(arr + 3);   //11  14

13) int arr[] = {11, 21, 31, 41};
    int *ptr = arr++;
    cout << *ptr << endl;   // ERROR

14) char ch = 'a';
    char* ptr = &ch;
    ch++;
    cout << *ptr << endl;  //'b'


15) char arr[] = "abcde";
    char *p = &arr[0];
    cout << p << endl; //"abcde"

16) char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    cout << p << endl;   //"bcde"

17) char str[]= "babbar";
    char *p = str;
    cout << str[0] << " " << p[0] << endl; // b   b


18) void update(int *p){
        *p = (*p)  *  2;
    }

    int main(){
        int i = 10;
        update(&i);
        cout << i << endl;  //20
    }


19)  void fun(int arr[]) {
        cout << arr[0] << " ";  // 12
    }

    int main() {
        int arr[] = {11, 12, 13, 14};
        fun(arr + 1);
        cout << arr[0] << endl;  // 11
    }



20)  void update(int *p){
        int a = 70;
        p = &a;
        *p = (*p) * (*p);  
    }

    int main(){
        int a = 70;
        square(&a);
        cout << a << endl;   // 70
    }

21) int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout << first << " " << second << endl;  //102  101

22) void increment(int **p){
        ++(**p);
    }

    int main(){
        int num = 110;
        int *ptr = &num;
        increment(&ptr);
        cout << num << endl;   // 111 
    }  



23) int main()
    {
    int arr[] = {41, 52, 36, 74};
    int *p = (arr + 1);
    cout << *arr + 8;      //49
    return 0;
    }


24)  int main()
    { 
        char *p; 
        char str[] = "pqrstuv";
        p = str;
        p += 3;
        cout << p;   // "stuv"
        return 0;
    }


25) int main()
    {
        char arr[20];
        int i;
        for(i = 0; i < 10; i++) {
            *(arr + i) = 65 + i;
        }
        *(arr + i) = '\0';
        cout << arr;  // ABCDEFGHIJ
        return 0;
    }

26) int main()
    {
        float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
        float *ptr1 = &arr[0];
        float *ptr2 = ptr1 + 3;
        cout<<*ptr2<<" ";      // 90.5
        cout<< ptr2 - ptr1;   // 3
        return 0;
    }

27)  void Q(int z)
    {
        z += z;
        cout<<z << " ";   // 14
    }

    void P(int *y) 
    {
        int x = *y + 2;
        Q(x);
        *y = x - 1; 
        cout<<x << " ";  // 7
    }

    int main()
    {
        int x = 5;
        P(&x);
        cout<<x;  // 6
        return 0;
    }


28)  int main()
    {
        int ***r, **q, *p, i=8;
        p = &i;
        (*p)++;
        q = &p;
        (**q)++;
        r = &q;
        cout<<*p << " " <<**q << " "<<***r;  // 10 10 10
        return 0;
    }


29)  int f(int x, int *py, int **ppz) {
        int y, z;
        **ppz += 1;
        z = **ppz;
        *py += 2;
        y = *py;
        x += 3;
        return x + y + z;
    }

    int main() {
        int c, *b, **a;
        c = 4;
        b = &c;
        a = &b;
        cout << f(c, b, a);   // 19.
        return 0;
    }




