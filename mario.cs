// approximate refactor of "Mario" problem in C#

using cs50.h;
using System; 

namespace Mario
{
    class Program
    {
        static void Main(string[] args)
        {
            do
            {
            Console.WriteLine("Enter pyramid height: ");
            int height = Console.ReadLine();
            }
            while (height < 0 || height > 23);

            for (int i = 1; i <= height; i++)
            {
                for (int j = 0; j < (height - i); j++)
                {
                   Console.WriteLine(" ");
                }

                for (int k = 0; k < i + 1; k++)
                {
                    Console.WriteLine("#");
                }

                Environment.NewLine;
            }
        }
    }
}



