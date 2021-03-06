#include <klein/klein.hpp>
#include <random>

static std::random_device r;
static std::minstd_rand lcg{r()};
static std::uniform_real_distribution<float> dist{-100.f, 100.f};

kln::rotor random_rotor()
{
    return {dist(lcg), dist(lcg), dist(lcg), dist(lcg)};
}

kln::motor random_motor()
{
    return {dist(lcg),
            dist(lcg),
            dist(lcg),
            dist(lcg),
            dist(lcg),
            dist(lcg),
            dist(lcg),
            dist(lcg)};
}

kln::point random_point()
{
    return {dist(lcg), dist(lcg), dist(lcg)};
}

int main(int argc, char** argv)
{
    // NOTE: All benchmarks from before were removed in favor of inspecting
    // assembly from the time being due to pathological measurement errors.
    // A new benchmark is underway that doesn't rely on `asm volatile` due to
    // compilers ignoring the directive.
    return 0;
}