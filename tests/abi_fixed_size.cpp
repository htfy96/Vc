#include <Vc/simd>

template <int N> using fv = Vc::fixed_size_simd<float, N>;
constexpr int Max = Vc::simd_abi::max_fixed_size<float> - 1;

fv<1> test1(fv<1> a) { return a; }
fv<2> test2(fv<2> a) { return a; }
fv<4> test4(fv<4> a) { return a; }
fv<8> test8(fv<8> a) { return a; }
fv<Max> testMax(fv<Max> a) { return a; }

int main() { return 0; }
