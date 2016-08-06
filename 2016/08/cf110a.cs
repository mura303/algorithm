using System;
using System.Linq;

class A{
    public static void Main( string[] a ){
        var n = Console.ReadLine().Count( c => c == '4' || c == '7');
        var r = n.ToString().Count( c => c != '4' && c != '7' ) == 0 ? "YES" : "NO";
        Console.WriteLine(r);
    }
}
   
