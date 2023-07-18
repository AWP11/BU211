using System.Drawing;

namespace snake_hardkor
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int width = 600;
            int height = 480;
            // Создаем изображение для игры
            Console.SetWindowSize(width, height);
            Graphics g = Graphics.FromImage(new Bitmap(width, height));
            // Рисуем фон
            g.Clear(Color.Black);
            // Задаем начальные координаты змеи
            int x = width / 2 - 5;
            int y = height / 2;
            // Координаты головы змеи
            int headX = x;
            int headY = y;
            int[] body = new int[10];
            for (int i = 0; i < 10; i++)
            {
                body[i] = x + i;
            }
            while (true)
            {
                // Читаем ввод пользователя с помощью Console.ReadKey
                ConsoleKeyInfo keyInfo = Console.ReadKey(true);
                if (keyInfo.Key == ConsoleKey.LeftArrow)
                {
                    x--;
                }
                else if (keyInfo.Key == ConsoleKey.RightArrow)
                {
                    x++;
                }
                // Если змея столкнулась с собой или стеной, завершаем игру
                if ((x < 0 || x > width - 1) || (y < 0 || y > height - 1))
                {
                    break;
                }
                g.DrawLine(Pens.Red, headX, headY, x, y);
                headX = x;
                headY = y;
                for (int j = 0; j < 10; j++)
                {
                    if (body[j] == headX && body[j + 1] == headY)
                    {
                        break;
                    }
                    else
                    {
                        body[j + 2] = headX;
                        headX++;
                    }
                }
            }
        }
    }
}