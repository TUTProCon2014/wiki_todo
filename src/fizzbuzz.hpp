#pragma once
#include <cstddef>
#include <cstdint>
#include <string>


namespace fizzbuzz{

/** FizzBuzzIteratorを構築するためのクラスです。
*/
class FizzBuzz
{
    // このクラスで内部的に使用するイテレータです
    class FizzBuzzIterator : public std::iterator<std::random_access_iterator_tag, std::string>
    {
        std::size_t _n;

      public:
        FizzBuzzIterator(std::size_t n) : _n(n) {}


        /** Iterator primitives
        */
        std::string operator*() const
        {
            std::string dst;
            
            if(_n % 3 == 0)
                dst += "Fizz";
            if(_n % 5 == 0)
                dst += "Buzz";

            if(dst.empty())
                dst = std::to_string(_n);

            return dst;
        }


        FizzBuzzIterator& operator++()
        {
            ++_n;
            return *this;
        }


        bool operator!=(const FizzBuzzIterator& rhs) const
        {
            return _n != rhs._n;
        }
    };


  public:
    FizzBuzz(std::size_t start, std::size_t end) : _m(start), _n(end) {}


    /** FizzBuzzIteratorを返します
    */
    FizzBuzzIterator begin() const
    {
        return FizzBuzzIterator(_m);
    }


    /// ditto
    FizzBuzzIterator end() const
    {
        return FizzBuzzIterator(_n);
    }


  private:
    std::size_t _m, _n;
};
}
