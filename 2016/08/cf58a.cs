using System;

class A{
    public static void Main(string[] a){
        var s = Console.ReadLine();
        var hello = "hello";
        foreach( var c in s ){
            if( c == hello[0] ){
                hello = hello.Remove(0,1);
                if( hello.Length == 0 ){
                    Console.WriteLine("YES");
                    return;
                }
            }
        }
        Console.WriteLine("NO");
    }
}
    
