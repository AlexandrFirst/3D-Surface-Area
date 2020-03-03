#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int surfaceArea(vector<vector<int>> A)
{
	int size = A.size()*A[0].size() * 2;


	for (int i = 0; i < A.size(); i++)
	{
		for (int p = 0; p < A[i].size(); p++)
		{
			if ((p + 1) >= A[i].size())
			{
				size += A[i][p];
			}
			else if (A[i][p] < A[i][p + 1])
			{
				size += abs(A[i][p] - A[i][p + 1]);
			}


			if ((p - 1) < 0)
			{
				size += A[i][p];
			}
			else if (A[i][p] < A[i][p - 1])
			{
				size += abs(A[i][p] - A[i][p - 1]);
			}


			if ((i + 1) >= A.size())
			{
				size += A[i][p];
			}
			else if (A[i][p] < A[i + 1][p])
			{
				size += abs(A[i][p] - A[i + 1][p]);
			}



			if ((i - 1) < 0)
			{
				size += A[i][p];
			}
			else if (A[i][p] < A[i - 1][p])
			{
				size += abs(A[i][p] - A[i - 1][p]);
			}


		}
	}
	return size;

}

int main()
{
	int W;
	int H;
	cin >> W >> H;

	vector<vector<int>> A(H);
	for (int i = 0; i < H; i++) {
		A[i].resize(W);

		for (int j = 0; j < W; j++) {
			cin >> A[i][j];
		}

	}

	int result = surfaceArea(A);

	cout << result << "\n";
}