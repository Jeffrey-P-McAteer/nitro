#include "pch.h"

#include "nitf_Test.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(test_image_segment_blank_nm_compression) {
public:

#define TEST_CASE(X) TEST_METHOD(X)
#include "nitf/unittests/test_image_segment_blank_nm_compression.cpp"

};