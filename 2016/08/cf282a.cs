using System;

class A{
    public static void Main( string[] args )
    {
        var n = int.Parse(Console.ReadLine());
        int result = 0;
        for( int i=0; i<n; i++ ){
            var s = Console.ReadLine();
            if( s[1] == '+' ){
                result ++;
            }else if( s[1] == '-' ){
                result --;
            }
        }

        Console.WriteLine(result);
        
    }
};
