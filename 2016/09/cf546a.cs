using System;
using System.Linq;

class A{
    static void Main(){
        var v = Console.ReadLine().Split().Select(e=>int.Parse(e)).ToArray();
        var k = v[0];
        var n = v[1];
        var w = v[2];

        var p = k * (w+1)*w/2 - n;
        Console.WriteLine( p >= 0 ? p : 0 );
    }
}
