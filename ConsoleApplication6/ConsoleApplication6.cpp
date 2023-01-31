#include <iostream>
using namespace std;

class Box
{
public:
    float width, height, depth;
    Box(float width, float height, float depth)
    {
        this->width = width;
        this->height = height;
        this->depth = depth;
    }
    float GetSurface()
    {
        return (width * height + width * depth + height * depth) * 2;
    }
    float GetVolume()
    {
        return width * height * depth;
    }
};
int main()
{
    float width, height, depth;
    cout << "幅を入力してください" << endl;
    cin >> width;
    cout << "高さを入力してください" << endl;
    cin >> height;
    cout << "奥行きを入力してください" << endl;
    cin >> depth;
    Box* box = new Box(width, height, depth);
    cout << "表面積 = " << box->GetSurface() << endl << "体積 = " << box->GetVolume() << endl;
    delete box;
}