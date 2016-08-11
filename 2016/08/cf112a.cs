using System;

class A{
    public static void Main(){
        var a = Console.ReadLine();
        var b = Console.ReadLine();
        var r = String.Compare(a,b,true);
        int result;
        if( r == 0 ){
            result = 0;
        }else if( r < 0 ){
            result = -1;
        }else{
            result = 1;
        }
        Console.WriteLine(result);
    }
}
