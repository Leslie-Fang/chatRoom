#include <iostream>
#include <gflags/gflags.h>
#include <glog/logging.h>
#include "add.hpp"
using namespace std;
DEFINE_int32(threshhold,100,"Define a threshhold value, Empty usage now");
int main(int argc, char ** argv){
	FLAGS_alsologtostderr = 1;
	FLAGS_log_dir = "/tmp";
	google::InitGoogleLogging(argv[0]);
	LOG(INFO) << "Program Start!";
	gflags::ParseCommandLineFlags(&argc, &argv, true);
	cout<<FLAGS_threshhold<<endl;
	test::output("Leslie");
	cout<<test::add(5,6)<<endl;
	google::ShutdownGoogleLogging();
	return 0;
}