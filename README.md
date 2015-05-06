This cmake project shows how to build the same project with two different configurations
using a super build concept.

In response to the stackoverflow question:
http://stackoverflow.com/questions/29971026/generator-expression-for-install-commands

---------------------------
Steps to test this project:
---------------------------

cd /tmp
git clone https://github.com/mpaluru/cmake_multiple_build_configs_example.git 
mkdir /tmp/top_build_dir
cd /tmp/top_build_dir
cmake /tmp/cmake_multiple_build_configs_example
make
