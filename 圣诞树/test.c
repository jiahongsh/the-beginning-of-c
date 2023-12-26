#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#define PI 3.14159265359
#define L1 16*3+1
#define L2 16*3+1
char love[17][L1] = {
"111101111010111111101111111110111111011111111111",
"111101111011011111101100000000011111011110000011",
"111100000000000111101101111110111111010110111011",
"111011111011111111101101111110110000000010111011",
"111010000000001110101000000000111111011110110111",
"110010111011101110100101111110111111011110110111",
"101010000000001110101101111110111000000110101111",
"011010111011101101101100000000111111011110110111",
"111010000000001111101111101111111111010110111011",
"111010111011101111101111110111110000000010111101",
"111011111110111111101100000000111111011110111101",
"111000000000000111010110111101111110111110011101",
"111011011110111111011011011101111110111110101011",
"111011101110111110111111011011111101111110110111",
"111011111010111110111000000000011011111110111111",
"111011111101111101111111111111111111111110111111",
};
char names[17][L2] = {
"111111101111111111111111100011111111111110001111",
"111111101111111111100000011111111110000001111111",
"111111101111111111111110111111111111111011111111",
"111111101111111111111110111110111111111011111011",
"111111101111111100000000000000010000000000000001",
"111110101011111111111110111111111111111011111111",
"111110101101111111110110110110111111011011011011",
"111101101110111111110110110100111111011011010011",
"111101101111011110000110110011111000011011001111",
"111011101111101111110110110111111111011011011111",
"110111101111101111110110110111011111011011011101",
"101111101111111111000110110111011100011011011101",
"111111101111111100110110111000010011011011100001",
"111111101111111111111110111111111111111011111111",
"111110101111111111111110111111111111111011111111",
"111111011111111111111110111111111111111011111111",
};

void gotoxy(int x, int y)
{
	HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { x,y };
	SetConsoleCursorPosition(hout, pos);
}

void SetColor(int color)
{
	if (color == 0)color = 0x04;
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, color);
}

void showsnow()
{
	SetColor(rand() % 16);
	int x = rand() % 120;
	int y = rand() % 40;
	gotoxy(x, y);
	putchar('*');
}

float sx, sy;
float sdCircle(float px, float py, float r)
{
	float dx = px - sx, dy = py - sy;
	return sqrtf(dx * dx + dy * dy) - r;
}
float opUnion(float d1, float d2)
{
	return d1 < d2 ? d1 : d2;
}
#define T px+scale*r*cosf(theta),py+scale*r*sin(theta)
int ribbon()
{
	float x = (fmodf(sy, 0.1f) / 0.1f - 0.5f) * 0.5f;
	return sx >= x - 0.05f && sx <= x + 0.05f;
}
float f(float px, float py, float theta, float scale, int n)
{
	float d = 0.0f, r;
	int t;
	for (r = 0.0f; r < 0.8f; r += 0.02f)
		d = opUnion(d, sdCircle(T, 0.05f * scale * (0.95 - r)));
	if (n > 0)
		for (t = -1; t <= 1; t += 2)
		{
			float tt = theta + t * 1.8f;
			float ss = scale * 0.9f;
			for (r = 0.2f; r < 0.8f; r += 0.1f)
			{
				d = opUnion(d, f(T, tt, ss * 0.5f, n - 1));
				ss *= 0.8f;
			}
		}
	return d;
}

int main(int argc, char* argv[])
{
	system("mode con cols=120 lines=42");
	srand((int)time(NULL));
	SetConsoleCP(437);
	SetConsoleOutputCP(437);
	int n = argc > 1 ? atoi(argv[1]) : 3;
	float zoom = argc > 2 ? atof(argv[2]) : 1.0f;
	for (sy = 0.8f; sy > 0.0f; sy -= 0.02f / zoom, putchar('\n'))
	{
		for (sx = -0.35f; sx < 0.35f; sx += 0.01f / zoom)
		{
			if (f(0, 0, PI * 0.5f, 1.0f, n) < 0.0f)
			{
				if (sy < 0.1f)
				{
					SetColor(rand() % 16);
					putchar('\3');
				}
				else {
					if (ribbon()) {
						putchar('=');
					}
					else {
						SetColor(rand() % 16);
						putchar('\3');
					}
				}
			}
			else {
				putchar(' ');
			}
		}
	}

	int i, j;
	int x, y = 3;
	for (i = 0; i < 17 - 1; i++, y++)
	{
		x = 53;
		for (j = 0; j < L1 - 1; j++, x++)
		{
			gotoxy(x, y);
			if (love[i][j] == '1')
			{
				putchar(' ');
			}
			else {
				SetColor(0x06);
				putchar('*');
			}
		}
	}
	y = 22;
	for (i = 0; i < 17 - 1; i++, y++)
	{
		x = 60;

		for (j = 0; j < L2 - 1; j++, x++)
		{
			gotoxy(x, y);
			if (names[i][j] == '1')
			{
				putchar(' ');
			}
			else {
				SetColor(0x06);
				putchar('*');
			}
		}
	}
	for (n = 0; n++ < 365;)
	{
		showsnow();
	}
	gotoxy(0, 40);
	getchar();
	return 0;
}

