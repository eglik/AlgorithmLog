int Euclidean(int a, int b)
{
	return a % b ? Euclidean(b, a%b) : b;
}