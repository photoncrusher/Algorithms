//===-- subfolder/Filename.h - Very brief description -----------*- C++ -*-===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2022 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//
///
/// \file
/// This file contains stuff that I am describing here in the header and will
/// be sure to keep up to date.
///
//===----------------------------------------------------------------------===//

long int mySqrt(long int x) {
    int a_count = -1;

    int x_to_count = x;

    while (x_to_count>0)
    {
        a_count += 1;
        x_to_count >>= 1;
    }
    int left_cal = a_count / 2;
    int right_cal = left_cal + 1;
    float left = float(x >> a_count << left_cal);
    float right = float(x >> a_count << right_cal);
    float stop_condition = 0.0001;
    float timeout = 16;
    float mid = 0;
    while (timeout > 0)
    {
        mid = (left + right) / 2;
        float mid_result = mid * mid;
        if (mid_result - x > stop_condition)
        {
            right = mid;
        }
        else if (mid_result - x < - stop_condition)
        {
            left = mid;
        }
        timeout -= 1;
    }
    int result = mid;
    std::cout << result * result - x << std::endl;
    if (result * result - x > 0)
    {
        return result-1;
    }
    return result;
    
}