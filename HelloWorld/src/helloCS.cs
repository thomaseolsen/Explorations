namespace HelloCS {
    class Program {
        static void Main(string[] args) {
            if (args.Length > 0)
                System.Console.WriteLine(string.Format("Hello, {0}!", args[0]));
            else
                System.Console.WriteLine("Hello World!");
        }
    }
}