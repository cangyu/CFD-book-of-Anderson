#include <iostream>
#include <vector>

using namespace std;

class Array2D
{
private:
	vector<double> m_data;
	size_t m_Nx, m_Ny;

public:
	Array2D(size_t nx, size_t ny, double val = 0.0) : m_Nx(nx), m_Ny(ny), m_data(nx*ny, val) {}

	// 0-based indexing
	double &at(int i, int j)
	{
		int idx = i + m_Nx * j;
		return m_data[idx];
	}

	double at(int i, int j) const
	{
		int idx = i + m_Nx * j;
		return m_data[idx];
	}

	// 1-based indexing
	double &operator()(int i, int j)
	{
		return at(i - 1, j - 1);
	}

	double operator()(int i, int j) const
	{
		return at(i - 1, j - 1);
	}
};

const double L = 1e-5; // m
const double Re = 1000.0;
const double Pr = 0.71;
const double Ma = 4.0;
const double R = 287.0;
const size_t IMIN = 1, IMAX=70;
const size_t JMIN = 1, JMAX=70;



int main(int argc, char *argv[])
{
    return 0;
}