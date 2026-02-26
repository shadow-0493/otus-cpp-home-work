#include <gtest/gtest.h>
#include "../../lib.h"

TEST(VersionTest, ValidVersion) {
    EXPECT_GT(version(), 0);
}
