#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) 
{
    long long answer = 0;
    int temp;

    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    
    for(a; a <= b; a++)
    {
        answer += a;
    }
    
    return answer;
}