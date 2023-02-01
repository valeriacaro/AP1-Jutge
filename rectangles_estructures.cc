#include <iostream>
#include <algorithm>
using namespace std;

struct Rectangle{
	double amplada;
	double altura;
	double area;
	double perimetre;
};

bool ordena(Rectangle& a, Rectangle& b){
	if (a.area != b.area) return a.area < b.area;
	if (a.perimetre != b.perimetre) return a.perimetre > b.perimetre;
	else return a.amplada < b.amplada;
}

void llegir_rectangles(int n, vector<Rectangle>& rectangles){
	Rectangle rectangle;
	double alt, ampl;
	for (int i = 0; i < n; ++i){
		cin >> ampl >> alt;
		rectangle.amplada = ampl;
		rectangle.altura = alt;
		rectangle.area = ampl * alt;
		rectangle.perimetre = 2*ampl+2*alt;
		rectangles.push_back(rectangle);
	}
}

void ordena_rectangles(vector<Rectangle> & rectangles){
	sort(rectangles.begin(), rectangles.end(), ordena);
}

void escriu_rectangles(vector<Rectangle> & rectangles){
	for (Rectangle rectangle : rectangles) cout << rectangle.amplada << " " << rectangle.altura << endl;
	cout << "----------" << endl;
}

int main(){
	int n;
	while (cin >> n){
		vector<Rectangle> rectangles;
		llegir_rectangles(n, rectangles);
		ordena_rectangles(rectangles);
		escriu_rectangles(rectangles);
	}
}