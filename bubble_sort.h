
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

void doBubbleSort(int A[], int N){
    for (int i = 0; i < N-1; i++)
    {
        for (int j = N-1; j > i; j--)
        {
            if (A[j] < A[j-1])
            {
                int temp = A[j];
                A[j] = A[j-1];
                A[j-1] = temp;
            }
        }
    }
}