#ifndef CPP_DOXYGEN_EXAMPLE_ANIMAL_H
#define CPP_DOXYGEN_EXAMPLE_ANIMAL_H

#include <string>

namespace vince {

    /**
     * 동물이다. 먹거나 짖는다.
     *
     * @brief 동물동물
     */
    class Animal {
    public:
        /**
         * 뭔가 한다
         *
         * @return 뭘 하는지
         */
        virtual std::string do_something() = 0;

        /**
         * 먹는다
         *
         * @param amount 먹은 갯수
         */
        virtual void eat_something(int amount) = 0;
    };

    /**
     * 고양이
     */
    class Cat : public Animal {
    private:
        /**
         * 야옹
         *
         * @return 야옹소리
         */
        std::string meow();

    public:
        /**
         * 야옹야옹
         *
         * @return ㅇㅅㅇ
         */
        std::string do_something() override;

        /**
         * @param amount 먹은 물고기 수
         */
        void eat_something(int amount) override;
    };

    class Dog : public Animal {
    private:
        std::string bark();

    public:
        std::string do_something() override;

        void eat_something(int amount) override;
    };

} // vince

#endif //CPP_DOXYGEN_EXAMPLE_ANIMAL_H