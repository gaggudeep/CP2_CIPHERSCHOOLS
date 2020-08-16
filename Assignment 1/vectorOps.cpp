#include <bits/stdc++.h>
using namespace std;

void add_to_vector(vector<int> &A,int x);
void sort_vector_asc(vector<int> &A);
void reverse_vector(vector<int> &A);
int size_of_vector(vector<int> &A);
void sort_vector_desc(vector<int> &A);
void print_vector(vector<int> &A);

int main()
{
    vector<int> v = {1, 2, 3, 4};
	print_vector(v);

	return 0;
}

void add_to_vector(vector<int> &A,int x)
{
	A.push_back(x);
}

void sort_vector_asc(vector<int> &A)
{
	sort(A.begin(), A.end());
}

void reverse_vector(vector<int> &A)
{
	reverse(A.begin(), A.end());
}

int size_of_vector(vector<int> &A)
{
	return A.size();
}

void sort_vector_desc(vector<int> &A)
{
	sort(A.begin(), A.end(), greater<int>());
}

void print_vector(vector<int> &A)
{
	for(int i : A)
	    cout<<i<<" ";
}
