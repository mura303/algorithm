using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

class dptable
{
    static int ITEM_MAX = 2000;
    static int WEIGHT_MAX = 2000;
    static int[,] table = new int[ITEM_MAX+1,WEIGHT_MAX+1];
    static int[] weight = {2,1,3,2};
    static int[] value = {3,2,4,2};
    static int itemnum = 4;
    
    public static void make_dptable(){
        for( int i=0; i<=WEIGHT_MAX; i++ ){
            table[itemnum,i] = 0;
        }

        for( int i=itemnum-1; i>=0; i-- ){
            for( int j=0; j<=WEIGHT_MAX; j++ ){
                if( j<weight[i] ){
                    table[i,j] = table[i+1,j];
                }else{
                    int[] a = {table[i+1,j], table[i+1,j-weight[i]]+value[i] };
                    table[i,j] = a.Max();
                }
            }
        }
        
    }

    public static void Main(){
        make_dptable();
//        int input[] = Console.ReadLine("hoge");
        Console.WriteLine(table[0,5]);
    }
}
