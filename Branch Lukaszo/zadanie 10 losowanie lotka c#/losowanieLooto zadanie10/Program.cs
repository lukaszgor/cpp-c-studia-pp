using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace losowanieLooto_zadanie10
{
    class losuj
    {

        class Program
        {
            static void Losowanie(int n, int k)
            {
                Random rand = new Random();
               

                int[] numbers = new int[n];
                for (int i = 1; i < n; i++)
                    numbers[i] = i + 1;
           

                for (int i = 0; i < k; i++)
                {
                  
                    int r = rand.Next(n);
               

                    Console.WriteLine(numbers[r]);
                    Console.ReadKey();


                    
                    numbers[r] = numbers[n-1 ];
                    n--;
                }
            }

            static void Main(string[] args)
            {

                Losowanie(50,6 );
            }
           
        }
       
    }
}

