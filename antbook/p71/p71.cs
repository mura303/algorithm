using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

class heap_impl
{
    static int[] heap = new int[100];
    static int sz = 0;

    static void push(int x){
        int i = sz++;
        while( i>0 ){
            int p = (i-1) / 2;
            if( heap[p] <= x ) break;
            heap[i] = heap[p];
            i = p;
        }
        heap[i] = x;
    }

    static int pop(){
        int ret = heap[0];
        int x = heap[--sz];
        int i=0;
        while( i*2 + 1 < sz){
            int a = i*2+1, b=i*2+2;
            if( b<sz && heap[b] < heap[a]) a = b;
            if( heap[a] >= x ) break;
            heap[i] = heap[a];
            i = a;
        }
        heap[i] = x;

        return ret;
    }
    public static void Main(){

        push( 3 );
        push( 4 );
        push( 8 );
        push( 2 );
        push( 10 );

        Console.WriteLine( pop() );
        Console.WriteLine( pop() );
        Console.WriteLine( pop() );
        Console.WriteLine( pop() );
    }
}
