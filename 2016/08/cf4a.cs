using System;

class A{
    static void Main(){
        var n = int.Parse(Console.ReadLine());
        if( n > 2 && n % 2 == 0 ){
            Console.WriteLine("YES");
        }else{
            Console.WriteLine("NO");
        }
    }
}
