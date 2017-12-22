#include <QCoreApplication>
#include <iostream>
#include <iterator>
#include <algorithm>
#include "boost/lambda/lambda.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(in(std::cin), in(), std::cout << (_1 * 3) << " ");

    return a.exec();
}
